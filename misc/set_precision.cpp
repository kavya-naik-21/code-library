void plusMinus(vector<int> arr) {
    double a=0,b=0,c=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>0) a++;
        else if(arr[i]<0) b++;
        else c++;
    }
    cout<<fixed<<setprecision(6)<<double(a/n)<<"\n"<<double(b/n)<<"\n"<<double(c/n);
}