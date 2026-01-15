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
