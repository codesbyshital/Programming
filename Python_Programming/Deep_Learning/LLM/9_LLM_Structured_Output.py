# JSON output : fetch LLM data & store into json file

# output is varying

from ollama import chat
import json

# Prompt for LLM
prompt = """Give me the information about Python programming language.
Return the result as JSON with these keys:
language
type
creator
"""
# Execute LLM
response = chat(
    
    model = "llama3.2:1b",
    messages = [
        {
        "role" : "user",   # who is user/admin : so its persona prompt/ other prompt
        "content" : prompt                      
        }
    ]
        
)

answer = response.message.content

print("\nLLM Response :")
print(answer)