#pragma once
#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader
{
public:
	Shader();
	~Shader();
	// 程序ID
	unsigned int ID;
	// 构造器读取并构建着色器
	Shader(const char* vertexPath, const char* fragmentPath);
	// 使用激活程序
	void use();
	// uniform 工具函数
	void setBool(const std::string &name, bool value)const;
	void setInt(const std::string &name, int value)const;
	void setFloat(const std::string &name, float value) const;

private:

};



