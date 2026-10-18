# inbuilt tokenizaton models  : GPT-2 : Encoder only model

from transformers import AutoTokenizer    # from transformer : Hugging face

# Load Pretrained Tokenizer

tokenizer = AutoTokenizer.from_pretrained("gpt2")

# Input sentence
sentence = " I love AI"

# Convert the sentence into tokens
tokens = tokenizer.tokenize(sentence)

# encode 
token_ids = tokenizer.encode(
    sentence,
    add_special_tokens = False              # keyword parameter
)

# Convert tokenID back to text
decoded = tokenizer.decode(token_ids)

print("Original Sentence : ",sentence)

print("Tokens : ",tokens)

print("Token Id's:",token_ids)

print("Decoded sentence: ",decoded)


#Original Sentence :  I love AI
#Tokens :  ['I', 'Ġlove', 'ĠAI']
#Token Id's: [40, 1842, 9552]
#Decoded sentence:  I love AI