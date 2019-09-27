import os
from flask import Flask, request, render_template, g, redirect, Response,session
tmpl_dir = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'templates')
app = Flask(__name__, template_folder=tmpl_dir)

@app.route('/')
def indexTommy():
	return render_template('index.html')

@app.route('/login')
def login():
	return render_template('login.html')



if __name__ == "__main__":
	app.run(debug=True)