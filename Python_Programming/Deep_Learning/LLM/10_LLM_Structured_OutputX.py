# JSON output : fetch LLM data & store into json file

#

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
    ],
    format = "json"
        
)

answer = response.message.content

print("\nLLM Response :")
print(answer)

# Convert JSON String to python dictionary
data = json.loads(answer)

print("\nData from Dictionary :",data)

print("\nData from Dictionary :")
print("Language : ",data.get("language"))
print("Type : ",data.get("type"))
print("Creator : ",data.get("creator"))

