# inbuilt tokenizaton models  : GPT-2 : Encoder only model
# updated : 



from transformers import AutoTokenizer    # from transformer : Hugging face

# Load Pretrained Tokenizer

tokenizer = AutoTokenizer.from_pretrained("gpt2")

# Input sentence
sentence = "Python is easy programming language I love it"

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


#Original Sentence :  Python is easy programming language I love it
#Tokens :  ['Python', 'Ġis', 'Ġeasy', 'Ġprogramming', 'Ġlanguage', 'ĠI', 'Ġlove', 'Ġit']
#Token Id's: [37906, 318, 2562, 8300, 3303, 314( I), 1842, 340]
#Decoded sentence:  Python is easy programming language I love it
