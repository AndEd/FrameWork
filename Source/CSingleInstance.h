#pragma once

template<typename T>
class SingleInstance {
public:
	SingleInstance() {}
	virtual ~SingleInstance() {}

public:	
	static T* GetInstance() {
		static T* _ins = new T();
		return _ins;
	}
}
