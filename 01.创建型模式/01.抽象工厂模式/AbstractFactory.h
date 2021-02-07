/*************************************************************************
	> File Name: AbstractFactory.h
	> Author: zhengdongqi 
	> Mail: 
	> Created Time: 六  2/ 6 19:58:52 2021
 ************************************************************************/

#ifndef _ABSTRACTFACTORY_H
#define _ABSTRACTFACTORY_H

// 键盘
class KeyBoard {
public:
    virtual ~KeyBoard() {}
	virtual void show() = 0;

};

// 微软的键盘
class MicrosoftKeyBoard : public KeyBoard {
public:
	void show() {
		std::cout << "微软的键盘" << std::endl;
	}

};

// 苹果的键盘
class AppleKeyBoard : public KeyBoard {
public:
	void show() {
		std::cout << "苹果的键盘" << std::endl;
	}

};

// 鼠标
class Mouse {
public:
    virtual ~Mouse() {}
	virtual void show() = 0;

};

// 微软的鼠标
class MicrosoftMouse : public Mouse {
public:
	void show() {
		std::cout << "微软的鼠标" << std::endl;
	}

};

// 苹果的鼠标
class AppleMouse : public Mouse {
public:
	void show() {
		std::cout << "苹果的鼠标" << std::endl;
	}

};

// 工厂
class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
	virtual KeyBoard *createKeyBoard() = 0;
	virtual Mouse *createMouse() = 0;

};

// 微软的工厂
class MicrosoftFactory : public AbstractFactory {
public:
	KeyBoard *createKeyBoard() {
		return new MicrosoftKeyBoard();
	}
	Mouse *createMouse() {
		return new MicrosoftMouse();
	}

};

// 苹果的工厂
class AppleFactory : public AbstractFactory {
public:
	KeyBoard *createKeyBoard() {
		return new AppleKeyBoard();
	}
	Mouse *createMouse() {
		return new AppleMouse();
	}

};

#endif
