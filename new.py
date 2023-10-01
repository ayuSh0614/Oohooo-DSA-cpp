# # import numpy as np
# # array1 = np.array([10,20,30,40])
# # print(array1)
# # print(array1[2])
# # print(array1[-1])

# # array2 = np.array([[2,3,4] , [5,6,7] , [8,9,10]])
# # print(type(array2))

# # print(array1.ndim)
# # print(array2.shape)
# # print(array1.dtype)
# # array7 = np.arange(6)
# # print(array7)
# # array8 = np.arange(-20,20,2)
# # print(array8)
# # array9 = np.array([[1,2,3],[4,5,6],[7,8,9]])
# # print(array9[0,2])
# # print(array1[::-1])
# # array11= np.array([[10,20,30,40],[50,60,70,80],[90,100,110,120]])
# # print(array11[1:3,0:2])
# # array12 = np.array
# # print(array11.transpose())
# # array14 = np.array([1,0,-2,3,56,74])
# # print(np.sort(array14))
# # array15  =np.array([[10,-7,0,4],[-1,5,200,40],[30,1,-1,4]])
# # print(np.sort(array15,axis = 1     ))
# # list1 =["a","b","c"]
# # list1.insert(2,"d")
# # print(list1)
# # print("aalekh where is the party bro")
# # print("be lated happy birthday wali")

# # c = 2/3
# # t = [2,3,4,5,6,7,8,9,0]
# # print(max(t))


# # # +000000089
# # -00000089

# # -0000089
# #            -00000009
# #            +000089
# #        0000009
# # 0000089


# # # while(s[i] == " ")
# # bool sign = true
# # for(int i = 0; i < n; i++)
# # {
# #         if s[i] == " ";
# #         continue;

# #         if s[i] == '-'
# #         sign = False
# #         continue
        
# #         if(s[i] == 0 and s[i+1] == 0)
# #         continue
# #         else;
# #         break


# # }

# # lst = {'a', 'b'}
# # print()

# from collections import defaultdict

# f = defaultdict(int)
# # f[2] = 3
# # f[3] = 4
# # f[2] += 5
# # f[2] = 3
# # f[2] = 3
# print(f)






















# # class Solution:
# #     def beautySum(self, s: str) -> int:
# #         ans=0
# #         for i in range(len(s)):



# #             #initialise variables
# #             freq_groups=collections.defaultdict(int)



# #             char_freq={}



# #             max_freq,min_freq=1,1


# #             char_freq[s[i]]=1


# #             freq_groups[char_freq[s[i]]]=1


# #             for j in range(i+1,len(s)):


# #                 if s[j] not in char_freq:


# #                     char_freq[s[j]]=1


# #                     min_freq=min(min_freq,1)


# #                     freq_groups[char_freq[s[j]]]+=1


# #                     ans+=max_freq-min_freq





# #                 else:


# #                     freq_groups[char_freq[s[j]]]-=1


# #                     if freq_groups[char_freq[s[j]]]==0 and min_freq==char_freq[s[j]]:


# #                         min_freq+=1


# #                     char_freq[s[j]]+=1


# #                     freq_groups[char_freq[s[j]]]+=1


# #                     max_freq=max(char_freq[s[j]],max_freq)
# #                     ans+=max_freq-min_freq
# #         return ans       
                
        
j = 2
k = 'i'*j
print(k)