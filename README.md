# Bomberman World — Boombastic

**Student:** Amanda Kjaergaard

## How to play

- **Controls:**
	Movement: W, A, S, D or arrow keys
	Bomb: Spacebar
	Restart: R
	Exit game: Esc or Q
- **Objective and rules:** 
	How to win: Kill 5 enemies
	You lose if: Time runs out or you die by taking damage from an enemy or your own bombs, you have 3 health
	If you get both the win and lose condition at the same time you will lose since the game registers the lose condition first. 
	The game has no extension rules.
- **Configurations / demo setup:** 
	How to select gameplay/stress configurations: The game has no special configurations or stress tests.

## Features and validation

| Feature | Check, observed result, and expected behaviour |
| --- | --- |
| 1. Player damage and death | Tested by showing player health diagnostics on screen, making sure the health went down when hit by an enemy bomb or your own bomb, observing that the health decreased once for every bomb hit, if getting hit twice the code should register it as 2 damage, it matched the expected behaviour. |
| 2. Round states and objective | Tested by completing a round and ensuring the correct state is displayed, verifying that the objective is properly tracked and updated by showing diagnostics and text when winning/losing, it matched the expected behaviour but the structure needs refinement since winning updates during the next frame. |
| 3. Safe restart | Tested by restarting the game multiple times and ensuring all state is properly cleared, observing that no old explosions or leftover game objects appear, it matched the expected behaviour. |
| 4. Solid bombs with owner escape | Tested by placing a bomb and then moving away from it and then back towards it, ensuring both players and enemies can leave their own bomb but then no one can enter the bombs, it matched the expected behaviour. |
| 5. Blast-range pickup | Tested by collecting the blast range power-up and verifying that the explosion radius increases, observing that the visual representation of the blast area expands and showing diagnostics, it matched the expected behaviour. |
| 6. A second enemy behaviour: Enemies can plant bombs | Tested by observing enemy behaviour whilst in playing game state, ensuring they place bombs "randomly", it matched the expected behaviour. |
| 7. Multiple bombs | Tested by placing multiple bombs in close proximity and observing if thats possible, making sure they explode seperatley and affect the environment as intended, it matched the expected behaviour. |
| 8. Bomb chain reaction | Tested by setting off two bombs and observing the resulting chain of explosions (since i'd already made the multipl bomb code this was easily tested), making sure the damage works correctly throughout the environment, first the bombs just never exploded but in the end it matched the expected behaviour. |

**Known issues:** 
	The win condition isn't being processed until next frame.
	Although this makes sure there won't be a conflict between the win and lose condition, it is not ideal and should be fixed.
	It has a short delay that makes the game feel unresponsive and can be confusing to the player.
	Updating the logic with game states and the update_game_state function more would solve this.

## Sources and assistance

This project builds on the shared Kotte foundations.

If not understanding something, I have used AI (ChatGPT) assistance to clarify and explain concepts. VisualStudios built in CoPilot was also used to help with code completion and suggestions. I have not used any other sources or assistance.
