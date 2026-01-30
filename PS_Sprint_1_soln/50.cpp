// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"50 ques"<<endl;
//     return 0;
// }


// 1. **Determining Even/Odd Numbers**  

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number"<<endl;
//     cin>>num;

//     if(num%2==0){
//         cout<<"even";
//     }else{
//         cout<<"odd";
//     }
//     return  0;
// }


// 2. **Checking for Prime Numbers**  

// #include<iostream>
// using namespace std;
// int main(){
//     int nums;
//     cout<<"Enter a number"<<endl;
//     cin>>nums;

//     if(nums<=1){
//         cout<<"Not prime";
//         return 0;
//     }

//     for(int i = 2; i*i<=nums;i++){
//         if(nums%i==0){
//             cout<<"Not prime";
//         }
//         else{
//             cout<<"Prime";
//         }
//     }
//     return 0;
// }

// 3. **Validating Leap Years**  

// #include<iostream>
// using namespace std;
// int main(){
//     int yr;
//     cout<<"Enter year number"<<endl;
//     cin>>yr;
    
//     if((yr %4 == 0 && yr %100 != 0)||(yr %400 == 0)){
//         cout<<"Leap yr";
//     }
//     else{
//         cout<<"Not leap yr";
//     }
//     return 0;
// }

// 4. **Calculating Armstrong Numbers**  

// #include<iostream>
// using namespace std;
// int main(){
//     int nums, original, digits, sum=0;
//     cout<<"Enter a number"<<endl;
//     cin>>nums;

//     original=nums;

//     while(nums>0){
//         digits = nums%10;
//         sum = sum +(digits*digits*digits);
//         nums = nums/10;
//     }
//     if(sum==original){
//         cout<<"Armstrong Number";
//     }else{
//         cout<<"Not Armstrong Number";
//     }
//     return 0;
// }

// 5. **Generating the Fibonacci Series**  

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0, b=1, c;
//     cout<<a<<" "<<b<<" ";
//     for(int i = 3; i<=10; i++){
//         c=a+b;
//         cout<<c<<" ";
//         a=b;
//         b=c;
//     }
//     return 0;
// }
// // =======upto 8=======
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0, b=1, c;
//     cout<<a<<" "<<b<<" ";
//     while (true)
//     {         
//     c=a+b;
//         if(c>8)
//             break;
//             cout<<c<<" ";
//             a=b;
//             b=c;
//     }
//     return 0;
// }

// 6. **Identifying Palindromes**  

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s, rev;
//     cout<<"Enter"<<endl;
//     cin>>s;
//     rev = s;
//     reverse(rev.begin(), rev.end());

//     if(s==rev){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not palindrome";
//     }
//     return 0;
// }

// ==============With only Strings================

// #include<iostream>
// #include<string>
// using namespace  std;

// int main(){
//     string s;
//     cout<<"Enter string"<<endl;
//     cin>>s;

//     int start = 0;
//     int end = s.length()-1;

//     while(start < end){
//         if(s[start]!= s[end]){
//             cout<<"Not Palindrome";
//             break;
//         }
//         else{
//             cout<<"Palindrome";
//             break;
//         }
//     }
//     return 0;
// }

// 7. **Crafting Star Patterns**  

// #include<iostream>
// using namespace std;

// int main(){
//     int height = 5;
//     for(int i=1; i<=height; i++){
        
//         for(int space=1; space<=height-1; space++)
//         cout<<" ";

//         for(int star=1; star<=(2*i-1); star++)
//         cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }

// 8. **Finding the Factorial of a Number**  

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     long long fact=1;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }

//     cout<<fact;
//     return 0 ;
// }

// 9. **Summing Digits of a Number**  

// #include<iostream>
// using namespace std;

// int main(){
//     int n, digits, sum = 0;
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     while(n>0){
//         digits= n% 10;
//         sum= sum + digits;
//         n= n/10;
//     }
//     cout<<sum;
//     return 0;
// }

// 10. **Finding the Greatest Common Divisor (GCD)**  
// =============EUCLIDIAN METHOD=====================

// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"Enter 2 numbers"<<endl;
//     cin>>a>>b;

//     while(b!=0){
//         int temp = b;
//         b = a%b;
//         a=temp;
//     }
//     cout<<a;
//     return 0;
// }

// 11. **Finding the Least Common Multiple (LCM)** 

// #include <iostream>
// using namespace std;

// int gcd(int a, int b){
//     while(b!=0){
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }

// int main(){
//     int a , b;
//     cout<<"Enter 2 numbers"<<endl;
//     cin>>a>>b;

//     int lcm = (a*b)/gcd(a,b);
//     cout<<lcm;

//     return 0;
// }

// 12. **Counting Vowels and Consonants in a String**  

// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a sentence"<<endl;
//     cin>>s;

//     int vowel = 0, consonents = 0;

//     for(int i = 0; i<s.length(); i++){
//         char c = s[i];

//         if(c>='A' && c<='Z')
//             c=c+32; /*converts to lowercase 'A'=65 'Z'=90  'A' = 65 'a' = 97 97 - 65 = 32*/
//         if(c>='a' && c<='z'){
//             if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
//                 vowel++;
//             else
//                 consonents++;    
//         }
            
//     }
//     cout<<"Vowels: "<<vowel<<endl;
//     cout<<"Consonents: "<<consonents<<endl;

//     return 0;
// }

// 13. **Reversing a String**  

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Enter a string"<<endl;
//     string s;
//     cin>>s;

//     int l = 0, r = s.length()-1;
    
//     while(l<r){
//         char temp = s[l];
//         s[l] = s[r];
//         s[r] = temp;
        
//         l++;
//         r--;
//     }
//     cout<<s;

//     return 0;
// }

// 14. **Finding the Largest and Smallest Numbers in an Array**  

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     int arr[n];
//     for(int i = 0; i<n; i++)
//         cin>>arr[i];
//     int smallest = arr[0];
//     int largest = arr[0];

//     for(int i = 1; i<n; i++){
//         if(arr[i]<smallest)
//             smallest= arr[i];

//         if(arr[i]>largest)
//             largest= arr[i];
//     }
//     cout<<"Smallest: "<<smallest<<endl;
//     cout<<"Largest: "<<largest<<endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
    
//     cout << "Enter the size of array: ";
//     cin >> size;
    
//     int arr[size];
    
//     cout << "Enter " << size << " numbers: " << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Number " << (i + 1) << ": ";
//         cin >> arr[i];
//     }
    
//     int smallest = arr[0];
//     int largest = arr[0];
    
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
        
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
    
//     cout << "\nArray: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     cout << "Smallest number: " << smallest << endl;
//     cout << "Largest number: " << largest << endl;
    
//     return 0;
// }

// 15. **Sorting an Array**  

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[6]= {3, 1, 4, 1, 5, 9};
//     int temp;

//     for(int i = 0; i<6; i++){
//         for(int j = i+1; j<6; j++){
//             if(arr[j]<arr[i]){
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     cout<<"Sorted array: "<<endl;
//     for(int i = 0; i<6; i++){
//         cout<< arr[i];
//     }
//     return 0;
// }

// 16. **Finding the Sum of Elements in an Array** 

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int temp = 0;
//     for(int i = 0; i<5; i++){
//         temp = temp + arr[i]; 
//     }
//     cout<<"Sum = "<<temp<<endl;

//     return 0;
// }

// 17. **Checking for Armstrong Numbers in a Range**  

// #include<iostream>
// using namespace std;

// int isArmstrong(int n)
// {
//     int original=n;
//     int sum = 0;

//     while(n>0){
//         int digit = n% 10;
//         sum +=digit*digit*digit;
//         n = n/10;

//     }
//     return sum == original;
// }


// int main(){
//     int start = 1, end = 500;
    
//     cout<<"Armstrong Numbers are : " <<endl;

//     for(int i = start; i<= end; i++){

//         if(isArmstrong(i)){
//             cout<<i<<" ";
//         }
//     }     


//     return 0;
// }


// 18. **Generating Multiplication Tables**  

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin >> num;

//     for(int i = 1; i <= 5; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }

//     return 0;
// }

// 19. **Finding Prime Numbers in a Range**  

// #include <iostream>
// using namespace std;

// int main(){
    
//     for(int num = 10; num<= 30; num++){
//         bool prime = true;
//         for(int i = 2; i*i<= num; i++){ /*i*i<=n start always from 2 and stop at i<root n or i*i<=n bcz So checking after √n is useless*/
//             if(num % i == 0){
//                 prime = false;
//                 break;
//             }

//         }
//         if(prime){
//             cout<<num<< " ";
//         }
//     }
//     return 0;
// }
