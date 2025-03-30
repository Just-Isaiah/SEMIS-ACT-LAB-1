#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	
	cout << "What Word would you like to look up?: ";
	cin >> a;
	
	if (a == "AURA"){
		cout << "This is a measuremen of how cool (positive aura) or embarrasing (negative aura) someone’s action is. (EX: Bro earned positive aura with that dance performance.)"; 
	}else if (a == "BASIC" ){
		cout << "A word to describe someone who likes mainstream things and is considered unoriginal. (EX: His taste in music is pretty basic.)";
	}else if (a == "BET" ){
		cout << "A term for agreement or approval. (EX: A: You still down to game tonight? ; B: Bet.)";
	}else if (a == "BOP" ){
		cout << "A really good song or beat. (EX: Yoasobi’s dicography is such a bop)";
	}else if (a == "BOYCOTTING"){
		cout << "To stop  supporting  something or someone. (EX: I suggest we organize an immediate boycott of all Starbucks products.)";
	}else if (a == "DOPE"){
		cout << "Very good, excellent, or impressive.(EX: Those shoes is so dope!)";
	}else if ( a == "DRIP"){
		cout << "A cool sense of style. It can refer to clothes or the way someone carries themselves. (EX: Look at these new shoes! My drip would be fire with them.)";
	}else if (a == "GHOSTING"){
		cout << "To stop communicating with someone out of the blue. (EX: I can’t believe he is ghosting me! In the first place, he was the one who reached out!)";
	}else if (a == "GIVING"){
		cout << "Used to describe someone or something emitting good or baad vibe. (Don’t you think he’s giving sus vibes?)";
	}else if (a == "GLOW UP"){
		cout << "To go through a positive physical, mental, or spiritual change. (EX: He had a major glow up over the summer.)";
	}else if (a == "GLAZING"){
		cout << "To overpraise something or someone. (EX: Why are people glazing on the new movie? It ain’t even that good.)";
	}else if (a == "GOAT"){
		cout << "Short for “The Greatest Of All Time”. (EX: Lebron James is my one and only G.O.A.T.)";
	}else if (a == "GREEN FLAG"){
		cout << "Used to decribe someone who’s actions and personality to be kind and positive. (EX: Lebron is such a green flag)";
	}else if (a == "LIT"){
		cout << "Exciting, fun, or excellent. (EX: The concert was so lit!)"; 
	}else if (a == "LOW-KEY"){
		cout <<"Subtle, not very obvious, or understated. (EX: I low-key hate this party but will pretend to enjoy it until it’s time to go home.)";
	}else if (a == "NO CAP"){
		cout << "Saying “no cap” means that you aren’t lying, or if you say someone is “capping,” then you are saying they are lying. (EX: No cap, I saw them entering a hotel last night.)"; 
	}else if (a == "NPC"){
		cout << "An acronym of non-playable character, a term used in gaming. It is used to describe someone with no individuality, originality, or personality. (EX: Jun is such an NPC.)";
	}else if (a == "RED FLAG"){
		cout << "Used to describe someone whos actions and personality to be bad and toxic. (EX: Stop seeing him, He’s such a red flag.)" ;
	}else if (a == "RIZZ"){
		cout << "Denotes someone's charisma or charm. (EX: I have unlimited rizz.)";
	}else if (a == "SALTY"){
		cout << "describes a feeling of annoyance, bitterness, or resentment towards something or someone. (EX: Why are you being salty? He means nothing to me.)";
	}else if (a == "SIGMA"){
		cout << "Refers to someone who is cool, independent, and successful, but who plays by their own rules. (EX: Denzel is such a sigma boy.)";
	}else if (a == "SHEESH"){
		cout << "An exclamatory term used to express surprise, disbelief, or amazement. (EX: Sheesh, this burger is burgering fr fr!)";
	}else if (a == "SIMP"){
		cout << "Someone who shows excessive sympathy and attention toward another person, typically to someone who does not reciprocate the same feelings. (EX: Stop being a simp. She doesn’t like you back.)";
	}else if (a == "SITUATIONSHIP"){
		cout << "A romantic relationship that is not considered to be formal or established. (EX: We’ve been going out for 5 months, but we’re still in a situationship.)";
	}else if (a == "SLAPS"){
		cout << "An adjective that describes how great something is. (EX: This  song slaps ngl.)";
	}else if (a == "SLAY"){
		cout << "To perform exceptionally well. (EX: You absolutely slayed the performance Queen! Good job.)"; 
	}else if (a == "SMOL"){
		cout << "Used when a person finds something tiny and adorable at the same time. (EX: Your dog is so smol! I love it!)";
	}else if (a == "STAN"){
		cout << "To be a fan of something or someone. (EX: We stan Lebron James)"; 
	}else if (a == "SUS"){
		cout << "Short for suspicious and typically means shady or questionable. (EX: I’m not sure I want to go. One of your newfound friends is sus.)";
	}else if (a == "TEA"){
		cout << "refers to a gossip, news, or information. (EX: Do you wanna hear the latest tea?)";
	}else{
		cout << "IDK What that is mb mb";
	}
	
	return 0;

}