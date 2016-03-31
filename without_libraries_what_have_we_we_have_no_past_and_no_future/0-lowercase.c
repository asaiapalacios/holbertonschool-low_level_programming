/* Write a function that converts a letter to lowercase  */

char lowercase(char ch1){

  if(ch1 >= 'A' && ch1 <= 'Z'){
    ch1 = ('a' + ch1 - 'A');
    return ch1;
  }
  else{
    return ch1;
  }
}
















