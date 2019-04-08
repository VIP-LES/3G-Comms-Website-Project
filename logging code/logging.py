from flask import Flask, request, jsonify
app = Flask(__name__)

@app.route("/log", methods=['POST'])
def add_message():
    content = request.get_json()
    parsed = str(content['event']) + ',' + str(content['data']) + ',' + str(content['published_at'])+ str("\n")
    print(parsed)
    with open("Particle.txt", "a") as text_file:
        text_file.write(parsed)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port = 8080)
