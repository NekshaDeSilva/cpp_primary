import React from "react";

// Error Boundary Component
class ErrorBoundary extends React.Component {
  constructor(props) {
    super(props);
    this.state = { hasError: false, error: null, errorInfo: null };
  }
  static getDerivedStateFromError(error) {
    return { hasError: true, error };
  }
  componentDidCatch(error, errorInfo) {
    this.setState({ errorInfo });
    // You can also log error to an error reporting service here
  }
  render() {
    if (this.state.hasError) {
      return (
        <div style={{ background: "#2d2d2d", color: "#fff", padding: 24, borderRadius: 8 }}>
          <h2>⚠️ Something went wrong.</h2>
          <details style={{ whiteSpace: "pre-wrap" }}>
            {this.state.error && this.state.error.toString()}
            <br />
            {this.state.errorInfo && this.state.errorInfo.componentStack}
          </details>
        </div>
      );
    }
    return this.props.children;
  }
}

// Main Project Info Component
function ProjectInfo() {
  return (
    <div style={{
      fontFamily: "Fira Code, monospace",
      background: "#181c20",
      color: "#e0e0e0",
      maxWidth: 800,
      margin: "40px auto",
      borderRadius: 12,
      boxShadow: "0 4px 24px #000a",
      padding: 32
    }}>
      <h1 style={{ color: "#00bfff", textAlign: "center", fontSize: "2.5em" }}>🚀 cpp_practice</h1>
      <p>
        <b>An open-source, educational C++ resource for beginners and enthusiasts.</b><br />
        <b>Affiliated with <a href="https://github.com/OpenRockets" style={{ color: "#00bfff" }} target="_blank" rel="noopener noreferrer">OpenRockets</a></b>
      </p>
      <h2>About This Project</h2>
      <p>
        <b>cpp_practice</b> is a curated collection of C++ code examples, mini-projects, and learning resources.
        It is designed to help new learners master C++ fundamentals and advanced concepts through hands-on practice, clear explanations, and real-world code.
        Whether you're a student, hobbyist, or open-source expert, you'll find valuable material here to sharpen your C++ skills.
      </p>
      <h3>What You'll Learn</h3>
      <ul>
        <li>C++ Basics: Variables, data types, input/output, operators, and control flow.</li>
        <li>Functions & Scope: Writing and using functions, parameter passing, and variable scope.</li>
        <li>Object-Oriented Programming: Classes, objects, constructors, encapsulation, and inheritance.</li>
        <li>Standard Library Usage: Vectors, strings, and other STL features.</li>
        <li>File I/O: Reading from and writing to files.</li>
        <li>Bitwise & Logical Operators: Practical examples and explanations.</li>
        <li>Loops & Recursion: For, while, do-while, and recursive patterns.</li>
        <li>Error Handling: Exception basics and safe coding practices.</li>
        <li>Mini Projects: Quizzes, login systems, ASCII animations, and more.</li>
        <li>Competitive Programming: Solutions to classic problems (e.g., Codeforces).</li>
      </ul>
      <h3>Folders</h3>
      <ul>
        <li><b>edu/</b> — Educational examples and concepts</li>
        <li><b>beg/</b> — Beginner-friendly mini-projects and demos</li>
      </ul>
      <p>
        View on <a href="https://github.com/nekshadesilva/cpp-practice" style={{ color: "#00bfff" }} target="_blank" rel="noopener noreferrer">GitHub</a>
      </p>
      <div style={{ marginTop: 32, textAlign: "center", color: "#aaa" }}>
        Contributed by <a href="https://github.com/nekshadesilva" style={{ color: "#00bfff" }} target="_blank" rel="noopener noreferrer">NekshaDeSilva</a>
      </div>
    </div>
  );
}

// Export wrapped in ErrorBoundary
export default function App() {
  return (
    <ErrorBoundary>
      <ProjectInfo />
    </ErrorBoundary>
  );
}