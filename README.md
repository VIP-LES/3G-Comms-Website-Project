This project outlines the components that are coming together to allow for 3g communication to our weather balloon

## Particle photon -3G-board
* Particle board contains a 3g antenna
* Includes a Sim card to their AT&T MNVO
* Interfaces with the PI using Serial commands given to it
* Connects to the Particle Cloud that receives messages and stores them temporarily
## Data Server
* Grabs messages from Particle Cloud and APRS periodically and stores them in a database for safekeeping
* Does data analytics and aggregation
## Website Server
* Reads from the Database and brings data to the frontend
* Optionally subscribes to the Particle Cloud to see new incoming messages
## Website Frontend
* Shows data from the server interactively
* Updates on reload of the page or using websockets etc.
