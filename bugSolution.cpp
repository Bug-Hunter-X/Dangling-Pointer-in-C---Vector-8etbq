std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i);
}
std::vector<int> vec2 = vec; //create a copy to avoid clearing original vector
int* ptr = &vec2[0]; 
vec.clear();
*ptr = 100; // No undefined behavior because vec2 still exists
//If vec2 is also not needed, make sure you don't have any pointer pointing to the vector before clearing it