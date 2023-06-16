import cv2
import numpy as np
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split

# Load the alphabet images
alphabet_images = []
alphabet_labels = []
for i in range(26):
    alphabet = chr(ord('A') + i)
    image = cv2.imread('alphabet_' + alphabet + '.jpg')
    alphabet_images.append(image)
    alphabet_labels.append(alphabet)

# Convert the images to grayscale and flatten them into a single row
alphabet_images = [cv2.cvtColor(image, cv2.COLOR_BGR2GRAY) for image in alphabet_images]
alphabet_images = [image.flatten() for image in alphabet_images]

# Split the data into training and test sets
X_train, X_test, y_train, y_test = train_test_split(alphabet_images, alphabet_labels, test_size=0.2)

# Train an SVM classifier
classifier = SVC(kernel='linear', C=1.0)
classifier.fit(X_train, y_train)

# Test the classifier on the test data
accuracy = classifier.score(X_test, y_test)
print('Accuracy:', accuracy)

# Use the classifier to predict the alphabet of an unknown image
unknown_image = cv2.imread('unknown_alphabet.jpg')
unknown_image = cv2.cvtColor(unknown_image, cv2.COLOR_BGR2GRAY)
unknown_image = unknown_image.flatten()
prediction = classifier.predict([unknown_image])[0]
print('Prediction:', prediction)
