//
// Created by lidan on 20/11/2020.
//

#ifndef EULEROPERATOR_RENDER_H
#define EULEROPERATOR_RENDER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Shader.h"
#include "camera.h"




class Render {
private:
    GLFWwindow * window = nullptr ;
    unsigned int VAO ;
    unsigned int VBO ;
    unsigned int VCO ;
    std::vector<glm::vec3>* renderTris = nullptr;
    std::vector<glm::vec3>* renderLines = nullptr ;
    std::string vs ;
    std::string fs ;
    Shader* renderShader = nullptr ;

    processInputFunc processinput_ ;
    framebuffer_size_callbackFunc framebufferSizeCallbackFunc_ ;
    scroll_callbackFunc scrollCallbackFunc_ ;
    mouse_callbackFunc mouseCallbackFunc_ ;

    float SCR_WIDTH,SCR_HEIGHT ;
    bool showLine_ = false  ;

public:



    Render(bool showLine ,
            std::vector<glm::vec3>* points,
           std::vector<glm::vec3> *lines,
           std::string vs,std::string fs,
           int width,int height,
           processInputFunc processinput,
           framebuffer_size_callbackFunc framebufferSizeCallbackFunc ,
           scroll_callbackFunc scrollCallbackFunc ,
           mouse_callbackFunc mouseCallbackFunc
           ) ;
    void Init() ;
    void ShutDown(int return_code) ;
    void  InitPoints() ;
    void MainLoop(Camera& camera) ;
    void setshowLine(bool showline){showLine_= showline;  InitPoints() ;} ;

};


#endif //EULEROPERATOR_RENDER_H
