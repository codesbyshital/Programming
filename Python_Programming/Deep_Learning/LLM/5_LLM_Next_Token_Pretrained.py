# Pretrained : token Embedding generation : 
# use distil GPT
# Input : Prompt : 1   |  Token : 4
# Embedding vector size : 1*3*768

# next token generation using pretrained gpt model : Auto regressive text generation


import torch        # Neural Network

from transformers import AutoTokenizer
from transformers import AutoModelForCausalLM

# Pretrained Model name
model_name = "distilgpt2"

# Load Tokeniser
tokenizer = AutoTokenizer.from_pretrained(model_name)

# Load pretrained Language model
model = AutoModelForCausalLM.from_pretrained(model_name)

# Input Prompt 
prompt = "Python is"

# Convert input into token ids
inputs = tokenizer(
    prompt,
    return_tensors = "pt"
)

# Enable Evaluation mode
model.eval()

# perform inference without gradient calculations   : greedy decoding
with torch.no_grad():
    outputs = model(**inputs)   # vaerialble no of argument operator
    
# Extract logits for final input position  : logits : value/importance of that word
logits = outputs.logits[0,-1,:]

# convert logits into probabilities  : numeric score into probablity
probablities = torch.softmax(
    logits,
    dim=-1
)

# select five highest probablitiy tokens
values, indices = torch.topk(
    probablities,
    5
)

print("Input : Prompt:",prompt)

for value,index in zip(values,indices):
    token = tokenizer.decode([index.item()])
    print(repr(token), round(value.item(), 4))   #

