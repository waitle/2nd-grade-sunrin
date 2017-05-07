import time

def publishProgress(a):
    a+=1

start_time = time.time()
for i in range(10):
    for j in range(10):
        for k in range(10):
            for l in range(10):
                publishProgress(l)
end_time = time.time()
print(end_time - start_time)

start_time = time.time()
for i in range(10000):
    publishProgress(i)

end_time = time.time()
print (end_time - start_time)
