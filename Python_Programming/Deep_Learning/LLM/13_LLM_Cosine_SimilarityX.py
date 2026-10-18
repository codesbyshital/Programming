# Stentence Embedding : embed whole sentence into a vector representation.
# Load the pre-trained embedding model
# map sentenses into 384-dimensional vector representation
# search sentence similarity, semantic search, clustering, classification, etc
# cosine Similarity from NLP : +1 : both lines are similar   0 : both sentences are not similar    -1 : if 2 sentencves are of opp meaning


from tensorflow import convert_to_tensor

from sentence_transformers import SentenceTransformer
from sentence_transformers import util


model = SentenceTransformer('all-MiniLM-L6-v2')  


sentence1 = "Python is a programming language"
sentence2 = "I love to play chricket"
#sentence2 = "Python is used for data science"

    
embedding1 = model.encode(sentence1,convert_to_tensor=True)
embedding2 = model.encode(sentence2,convert_to_tensor=True)

# Calculate cosine similarity

similarity = util.cos_sim(embedding1,embedding2)

print("Sentence 1 : ",sentence1)
print("Sentence 2 : ",sentence2)

print("Cosine Similarity : ")
print(similarity.item())