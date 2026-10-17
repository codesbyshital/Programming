# Stentence Embedding : embed whole sentence into a vector representation.

from sentence_transformers import SentenceTransformer

# Load the pre-trained embedding model
# map sentenses into 384-dimensional vector representation
# search sentence similarity, semantic search, clustering, classification, etc
# cosine Similarity from NLP : +1 : both lines are similar   0 : both sentences are not similar    -1 : 


model = SentenceTransformer('all-MiniLM-L6-v2')  

sentences = [
    "Python is a programming language",
    "Python is used for data science",
    "I support india cricket team"
    
]

embeddings = model.encode(sentences)

# Display sentence embeddings
for index, embedding in enumerate(embeddings):
    print("-"*60)
    print("\nSentence : ",sentences[index])
    print("Embedding : ")
    print(embedding[:10])
    
    print("\n Total Dimensions : ",len(embedding))  # 384
    
    
    
    