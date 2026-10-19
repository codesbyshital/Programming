# Pretrained : token Embedding generation : 
# use distil GPT
# Input : 1   |  Token : 4
# Embedding vector size : 1*3*768



import torch        # for Neural Network

from transformers import AutoTokenizer
from transformers import AutoModelForCausalLM

# Pretrained Model name
model_name = "distilgpt2"

# Load Tokeniser
tokenizer = AutoTokenizer.from_pretrained(model_name)

# Load pretrained Language model
model = AutoModelForCausalLM.from_pretrained(model_name)

# input sentence

sentence = "India is my country"

# Convert text to PyTorch tensors
inputs = tokenizer(
    sentence,
    return_tensors = "pt"       # preTrained Matrix(tensors)   :pt =  PyTorch
)

# Extract tokenid
token_ids = inputs["input_ids"]

# Access the pretrained input embedding layer
embedding_layer = model.get_input_embeddings()

# Retrieve the embedding vectors
embeddings = embedding_layer(token_ids) 

print("Input sentence :",sentence)
print("Token IDs : ")
print(token_ids)
print("Embedding Shape : ")
print(embeddings.shape)

print("First Token Embedding : ")
print(embeddings[0,0, :10])                 # display only 10 embeding vectors

