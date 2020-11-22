//
// Created by lidan on 20/11/2020.
//

#include "render.h"

Render::Render(bool showLine,
               std::vector<glm::vec3> *points,
               std::vector<glm::vec3> *lines,
               std::string vs,std::string fs,
               int width ,int height,
               processInputFunc processinput,
               framebuffer_size_callbackFunc framebufferSizeCallbackFunc ,
               scroll_callbackFunc scrollCallbackFunc ,
               mouse_callbackFunc mouseCallbackFunc) {
    renderTris = points ;
    renderLines = lines ;
//    renderShader = nullptr ;
    this->vs = vs ;
    this->fs = fs ;
    processinput_ = processinput ;
    framebufferSizeCallbackFunc_= framebufferSizeCallbackFunc ;
    scrollCallbackFunc_ = scrollCallbackFunc ;
    mouseCallbackFunc_ = mouseCallbackFunc ;
    SCR_HEIGHT = height ;
    SCR_WIDTH = width ;

    showLine_ = showLine ;
}


void Render::ShutDown(int return_code)     {
    glfwTerminate();
    exit(return_code);
}

void Render::MainLoop(Camera& camera) {
    // the time of the previous frame
    double old_time = glfwGetTime();
    // this just loops as long as the program runs
    bool running = true;
    InitPoints() ;

    while (!glfwWindowShouldClose(window))
    {
        processinput_(window);

        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        // be sure to activate shader when setting uniforms/drawing objects
        renderShader->use();
        glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 200.0f);
        glm::mat4 view = camera.GetViewMatrix();
        renderShader->setMat4("project", projection);
        renderShader->setMat4("view", view);

        glm::mat4 model = glm::mat4(1.0f);
        renderShader->setMat4("model", model);

//        std::cout<<points->size() <<std::endl;
        glBindVertexArray(VAO);
        if (!showLine_)
        glDrawArrays(GL_TRIANGLES, 0, renderTris->size());
        else
            glDrawArrays(GL_LINES, 0, renderLines->size()) ;

        glfwSwapBuffers(window);
        glfwPollEvents();

    }
}
void Render::InitPoints()     {
    std::cout<<"all points is "<<renderTris->size()<<std::endl ;
    if(showLine_)
        glPolygonMode(GL_FRONT_AND_BACK ,GL_LINE );

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glBindVertexArray(VAO) ;
    glBindBuffer(GL_ARRAY_BUFFER,VBO) ;
    if(!showLine_)
    {
        glBufferData(GL_ARRAY_BUFFER,sizeof(glm::vec3)*(renderTris->size()),&((*renderTris)[0]),GL_STATIC_DRAW) ;
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
        glEnableVertexAttribArray(0);
    }else{
        glBufferData(GL_ARRAY_BUFFER,sizeof(glm::vec3)*(renderLines->size()),&((*renderLines)[0]),GL_STATIC_DRAW) ;
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
        glEnableVertexAttribArray(0);
    }
}


void Render::Init() {

    if (!glfwInit()) exit(EXIT_FAILURE);
    // These hints switch the OpenGL profile to core
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    window = glfwCreateWindow((float)SCR_WIDTH ,(float)SCR_HEIGHT,"eulerOperator Liyuan",NULL,NULL) ;

    if (!window){ glfwTerminate(); exit(EXIT_FAILURE); }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSwapInterval(1);


    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        glfwTerminate() ;
        return ;
    }
    glViewport(0, 0, (float)SCR_WIDTH , (float)SCR_HEIGHT); // viewport for x,y to normalized device coordinates transformation
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

    glfwSetFramebufferSizeCallback(window,framebufferSizeCallbackFunc_) ;
    glfwSetCursorPosCallback(window,mouseCallbackFunc_) ;
    glfwSetScrollCallback(window,scrollCallbackFunc_) ;
    renderShader = new Shader(vs.c_str(),fs.c_str()) ;


}

