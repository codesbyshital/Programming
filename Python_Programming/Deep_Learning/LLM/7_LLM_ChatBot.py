# LLM : llama

from ollama import chat

messages = [
    {
        "role" : "system",
        "content" : "You are a python programming Teacher"
    }
]

print("Marvellous python Tutor")
print("Type exit to stop")

while True :
    # accept user input
    print("_"*60)
    question = input("\nYou :").strip()             # remove white spaces
    
    # stop chatbot
    if question.lower() == "exit":
        print("Thank you for using Marvellous Bot")
        break
    
    # ignore empty line
    if not question :
        continue

    messages.append(
        {
            "role" : "user",
            "content" : question
        }
    )
    
    # LLM
    response = chat(
        model = "llama3.2:1b",
        messages = messages
    )
    
    answer = response.message.content
    
    print("\nMarvellous AI : ",answer)
    
    messages.append(
        {
            "role" : "assistant",
            "content" : answer
        }
    )