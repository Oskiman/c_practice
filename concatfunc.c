// My code for a string concatenation function
// an exercise on boot.dev C course, lesson 14
void concat_strings(char *str1, const char *str2) {
  while(*str1 != '\0')
  {
    *str1++;  
  }
  while(*str2 != '\0')
    {
      *str1 = *str2;
      *str1++;
      *str2++;
    }
}

