def bubbleSort(arr):
	n = len(arr)
	swapping = False
	
	for i in range(n-1):
		for j in range(0, n-i-1):
			if arr[j] > arr[j + 1]:
				swapped = True
				arr[j], arr[j + 1] = arr[j + 1], arr[j]
		
		if(!swapped):
			return


# Driver code
arr = [10, 57, 85, 13, 2, 191, 70]

bubbleSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
	print("% d" % arr[i], end=" ")
