# prompt Engineering  : types of prompt

from ollama import chat

# select the local eLLM
Model = "llama3.2:1b"

# define prompts
prompts = [
    "Explain recursion",
    
    "Explain recursion in python in 3 simple points",
    
    """You are experienced python teacher.
    Explain recursion for beginner.
    Give one simple example.""",
    
    """Convert programming languges to uppercase.
    Example 1 : 
    Input : python
    Output : PYTHON
    
    Example 1 : 
    Input : java
    Output : JAVA
    
    Input : javascript
    Output :"""
    
]

# Execute every prompt
for index, prompt in enumerate(prompts, start=1):
    print("-"*30)
    print("Prompt Number : ",index)
    print("Input Prompt : ",prompt)
    
    response = chat(
        model = Model,
        messages = [
            {
            "role" : "user",   # who is user/admin : so its persona prompt/ other prompt
            "content" : prompt                      
        }
        ]
            
    )
    
    print("\nResponse from LLM is :")
    print(response.message.content)