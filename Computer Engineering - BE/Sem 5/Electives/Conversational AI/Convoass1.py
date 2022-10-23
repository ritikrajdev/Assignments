import numpy as np

#Question 1
#A
arr = np.array([1, 2, 3, 6, 4, 5])
print(arr[::-1])

#B
array1 = np.array([[1, 2, 3], [2, 4, 5], [1, 2, 3]])
# print(array1.reshape(9,))
print(array1.ravel())
print(array1.flatten())

#C
arr1 = np.array([[1, 2], [3, 4]])
arr2 = np.array([[1, 2], [3, 4]])
print(True) if np.array_equal(arr1,arr2) else print(False)

#D
#i
x = np.array([1,2,3,4,5,1,2,1,1,1])
y = np.bincount(x).argmax()
print(np.where(x == y))
#ii
x = np.array([1, 1, 1, 2, 3, 4, 2, 4, 3, 3, ]) 
y = np.bincount(x)
maximum = max(y)
for num,i in enumerate(y):
    if i == maximum:
        print(num)
        print(np.where(x == x[num]))

#E
gfg = np.matrix('[4, 1, 9; 12, 3, 1; 4, 5, 6]')
#i
print(np.sum(gfg))
#ii
print("Row wise: ",np.sum(gfg, axis = 1))
#iii
print("Column Wise: ",np.sum(gfg, axis = 0))

#F
n_array = np.array([[55, 25, 15],[30, 44, 2],[11, 45, 77]])
#i 
print("Sum of diagonal: ",np.trace(n_array))
#ii
print("Eigen value: ",np.linalg.eigvals(n_array))
#iii
w, v = np.linalg.eig(n_array)
print("Eigen vector: ", v)
#iv
print("Inverse: ",np.linalg.inv(n_array))
#v
print("determinant: ",np.linalg.det(n_array))

#G
#i
p = np.array([[1, 2], [2, 3]])
q = np.array([[4, 5], [6, 7]])
print("Multiplication: ",np.matmul(p,q))
print("Covariance: ",np.cov(p, q))
# #ii
p = np.array([[1, 2], [2, 3], [4, 5]])
q = np.array([[4, 5, 1], [6, 7, 2]])
print("Multiplication: ",np.matmul(p,q))
print("No Coveriance for unequal matrices")

#H
x = np.array([[2, 3, 4], [3, 2, 9]])
y = np.array([[1, 5, 0], [5, 10, 3]])
print("Inner product: ", np.inner(x, y))
print("Outer product: ",np.outer(x, y))
print("Cross product: ",np.cross(x, y))

#Question 2
#A
array = np.array([[1, -2, 3],[-4, 5, -6]])
#i
print("Absolute array:\n",np.absolute(array))
#ii
#flat
flat=array.flatten()
print("25th percentile of arr : ",np.percentile(flat, 25))
print("50th percentile of arr : ",np.percentile(flat, 50))
print("75th percentile of arr : ",np.percentile(flat, 75))
#for each row
print("25th percentile of arr : ",np.percentile(array, 25, axis=1))
print("50th percentile of arr : ",np.percentile(array, 50, axis=1))
print("75th percentile of arr : ",np.percentile(array, 75, axis=1))
#for each column
print("25th percentile of arr : ",np.percentile(array, 25, axis=0))
print("50th percentile of arr : ",np.percentile(array, 50, axis=0))
print("75th percentile of arr : ",np.percentile(array, 75, axis=0))
#iii
#flat
print("Mean",np.mean(flat))
print("Median",np.median(flat))
print("STD",np.std(flat))
#row
print("Mean",np.mean(array,axis=1))
print("Median",np.median(array,axis=1))
print("STD",np.std(array,axis=1))
#column
print("Mean",np.mean(array,axis=0))
print("Median",np.median(array,axis=0))
print("STD",np.std(array,axis=0))

#B
a = np.array([-1.8, -1.6, -0.5, 0.5,1.6, 1.8, 3.0])
print("Floor: ",np.floor(a))
print("Ceil: ",np.ceil(a))
print("Truncated values: ",np.trunc(a))
print("Rounded values: ",np.round(a))

#Question 3
#A
array = np.array([10, 52, 62, 16, 16, 54, 453])
#i
print(np.sort(array))
#ii
print(np.argsort(array))
#iii
arr1=np.sort(array)
print(arr1[:4])
#iv
arr2=np.sort(array)
print(arr2[-5:])

#B
array = np.array([1.0, 1.2, 2.2, 2.0, 3.0, 2.0])
def Int(num):
  return np.equal(np.mod(num,1),0)

for num in array:
  if Int(num):
    print(num, ":Integer")
  else:
    print(num, ":Float")

#Question 4
from PIL import Image
def img_to_array(path):
    im = Image.open(path) # img size (42, 349, 4)
    np_im = np.array(im)
    print(np_im.shape)
    with open('test.txt', 'w') as outfile:
        for slice_2d in np_im:
             np.savetxt(outfile, slice_2d)
             
def array_to_img(path):
    new_data =  np.loadtxt(path)
    new_data=new_data.reshape((42, 349, 4))
    img = Image.fromarray(new_data.astype( np.uint8),'RGB')
    img.save('my.bmp')
    img.show()