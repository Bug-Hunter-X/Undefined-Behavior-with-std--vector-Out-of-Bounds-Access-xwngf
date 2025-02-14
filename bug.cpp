std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // b is true
bool c = vec[1]; // c is false
bool d = vec[2]; // undefined behavior! Accessing out of bounds element
