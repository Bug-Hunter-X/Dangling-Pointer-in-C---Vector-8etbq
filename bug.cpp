std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}
int* ptr = &vec[0]; 
vec.clear(); 
//ptr is now dangling
*ptr = 100; //undefined behavior