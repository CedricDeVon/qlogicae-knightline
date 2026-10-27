import React from "react";
import { render, Box, Text, useApp, useInput } from "ink";

function App() {
  const [count, setCount] = React.useState(0);
  const { exit } = useApp();

  useInput((input, key) => {
    if (input === "q" || key.escape) {
      exit();
      return;
    }

    if (key.upArrow) {
      setCount((value) => value + 1);
    }

    if (key.downArrow) {
      setCount((value) => value - 1);
    }
  });

  return React.createElement(
    Box,
    {
      flexDirection: "column",
      borderStyle: "round",
      padding: 1,
      gap: 1,
    },
    React.createElement(
      Text,
      { bold: true, color: "cyan" },
      "Basic Ink TUI",
    ),
    React.createElement(Text, null, `Counter: ${count}`),
    React.createElement(
      Text,
      { color: "green" },
      "↑ Increment  ↓ Decrement",
    ),
    React.createElement(
      Text,
      { dimColor: true },
      "Press q or Esc to exit.",
    ),
  );
}

render(React.createElement(App));
