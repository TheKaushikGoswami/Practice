import React, { Component } from 'react';

class Stopwatch extends Component {
  constructor(props) {
    super(props);
    this.state = {
      isRunning: false,
      elapsedTime: 0
    };
    this.timer = null;
  }

  handleStart = () => {
    if (!this.state.isRunning) {
      this.setState({ isRunning: true });
      this.timer = setInterval(() => {
        this.setState(prevState => ({
          elapsedTime: prevState.elapsedTime + 1
        }));
      }, 1000);
    }
  };

  handleStop = () => {
    clearInterval(this.timer);
    this.setState({ isRunning: false });
  };

  handleReset = () => {
    clearInterval(this.timer);
    this.setState({ isRunning: false, elapsedTime: 0 });
  };

  formatTime = (time) => {
    const hours = Math.floor(time / 3600);
    const minutes = Math.floor((time % 3600) / 60);
    const seconds = time % 60;
    return `${hours}:${minutes < 10 ? '0' : ''}${minutes}:${seconds < 10 ? '0' : ''}${seconds}`;
  };

  render() {
    const { isRunning, elapsedTime } = this.state;

    return (
      <div>
        <h1>Stopwatch</h1>
        <p>Time: {this.formatTime(elapsedTime)}</p>
        <button onClick={this.handleStart} disabled={isRunning}>Start</button>
        <button onClick={this.handleStop} disabled={!isRunning}>Stop</button>
        <button onClick={this.handleReset}>Reset</button>
      </div>
    );
  }
}

export default Stopwatch;
