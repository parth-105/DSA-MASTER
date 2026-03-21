unorderd_map <char,int> freq;
for(int i=0;i<3;i++){
    freq['a']++;
}
for(int i=0;i<2;i++){
    freq['2']++;
}
if(freq.count('a')) cout<<"found";
freq.erase('b');
cout << freq.size();


unordeer_set<char> st;
st.insert('a');
st.insert('e');
st.insert('i');
if(st.count('a')) cout <<"vowel";
if(st.count('b')) cout <<"not vowel";
cout<<st.size();




cout<<s[0];
cout<<s[n-1];
for(char c:s) cout<<s[c];
count<<s.size();


string s = "hello"

1. Loop through string using INDEX
2. Print only VOWELS (a,e,i,o,u)
   hint: use your set from before!


unorderd_set <char> st ={'a','e','i','o','u'};

for(int i = 0; i<s.size(); i++){
    if(st.count(s[i])) cout <<s[i];
}


vector<int> v = {3, 1, 4, 1, 5};
int n = v.size();
cout<<v[0];
cout<<v[n-1];
v.push_back(9);
cout<<n;
for(int i = 0 ; i<n; i++){
    cout << v[i];
}


unorderd_set<char> st = {'a','e','i','o','u'};
if(x>10)
if(st.count(c))
if(mpp.size()>2)
if(arr[left]<arr[right])
if(mpp[c]<need)