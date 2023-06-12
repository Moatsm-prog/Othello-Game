
# Othello "Reversi" Game

Welcome to the Othello "Reversi" Game! This project is a C++ implementation of the classic board game Othello, also known as Reversi. The game includes a graphical user interface (GUI) built using the QT framework

## Game Modes
The Othello "Reversi" Game offers three exciting game modes for players to enjoy:

__Human vs Human:__ In this mode, two human players can compete against each other on the same computer. Each player takes turns making moves on the game board.

__Human vs AI:__ This mode allows a human player to challenge the AI opponent. Test your skills against the computer and see if you can outsmart it!

__AI vs AI:__ Sit back and watch the AI opponents battle it out! This mode lets you observe two AI players compete against each other. You can see how different AI difficulty levels affect their gameplay.

## AI Difficulty Levels

The game's AI opponent comes with three difficulty levels to provide varying challenges for players:

__Easy:__ The AI opponent uses simple coins parity __greedy__ heuristic, with considerable iterations.

__Medium:__ The medium difficulty level AI is dependant on coins captured heuristic

__Hard:__ The hard difficulty level AI is a combination of four different heuristics

## Pruning Minimax Algorithm with Iterative Deepening

The AI opponent in the Othello "Reversi" Game utilizes a pruning minimax algorithm with iterative deepening. This powerful algorithm allows the AI to evaluate different moves and select the best one based on a scoring mechanism. The iterative deepening technique helps the AI explore deeper into the game tree and improve its decision-making capabilities.
