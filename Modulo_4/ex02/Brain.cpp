/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 16:32:13 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:47:32 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	this->ideas[0] = "I want to eat";
	this->ideas[1] = "I will run";
	this->ideas[2] = "I will sleep";
	this->ideas[3] = "I want cuddles";
	this->ideas[4] = "I like my owner";
	this->ideas[5] = "I like food";
	this->ideas[6] = "I like to sleep";
	this->ideas[7] = "I like cuddles";
	this->ideas[8] = "I want to go for a walk";
	this->ideas[9] = "Hello :)";
	this->ideas[10] = "I wonder what's for dinner";
	this->ideas[11] = "I should nap now";
	this->ideas[12] = "I see a butterfly";
	this->ideas[13] = "Time for fetch";
	this->ideas[14] = "Must inspect the trash can";
	this->ideas[15] = "I need to bark";
	this->ideas[16] = "I love sunbeams";
	this->ideas[17] = "Where is my favorite toy?";
	this->ideas[18] = "I should follow that smell";
	this->ideas[19] = "Feeling majestic";
	this->ideas[20] = "I am a good companion";
	this->ideas[21] = "Another nap won't hurt";
	this->ideas[22] = "Time for zoomies";
	this->ideas[23] = "I'm thinking about treats";
	this->ideas[24] = "I need a scratch behind the ears";
	this->ideas[25] = "I will guard the door";
	this->ideas[26] = "I should sit here";
	this->ideas[27] = "I'm feeling playful";
	this->ideas[28] = "I'm waiting patiently";
	this->ideas[29] = "What a curious noise";
	this->ideas[30] = "I must stretch all my legs";
	this->ideas[31] = "I'm ready for adventure";
	this->ideas[32] = "I'll watch the neighbor";
	this->ideas[33] = "I love this blanket";
	this->ideas[34] = "I'm the fastest runner";
	this->ideas[35] = "I should chew on this safely";
	this->ideas[36] = "I love my bed";
	this->ideas[37] = "I hear the ice machine";
	this->ideas[38] = "I will find the sunny spot";
	this->ideas[39] = "I need to drink some water";
	this->ideas[40] = "I'm feeling very content";
	this->ideas[41] = "I should follow my human everywhere";
	this->ideas[42] = "I'm going to look out the window";
	this->ideas[43] = "I miss the garden";
	this->ideas[44] = "I deserve belly rubs";
	this->ideas[45] = "I should check if the floor is cold";
	this->ideas[46] = "I'm thinking about birds";
	this->ideas[47] = "I will pretend to be invisible";
	this->ideas[48] = "I feel like howling";
	this->ideas[49] = "I need a long walk now";
	this->ideas[50] = "I love riding in the car";
	this->ideas[51] = "I'm hungry for a snack";
	this->ideas[52] = "I should chase my tail";
	this->ideas[53] = "I'm the best pet in the world";
	this->ideas[54] = "I feel like digging";
	this->ideas[55] = "I need to yawn widely";
	this->ideas[56] = "I will watch the television";
	this->ideas[57] = "I should make a comfy nest";
	this->ideas[58] = "I'm ready to play now";
	this->ideas[59] = "I feel sleepy and warm";
	this->ideas[60] = "I should sit very still";
	this->ideas[61] = "I'm planning my next move";
	this->ideas[62] = "I love the sound of rain";
	this->ideas[63] = "I need a good brushing";
	this->ideas[64] = "I'm waiting by the door";
	this->ideas[65] = "I hear crinkling!";
	this->ideas[66] = "I'm going to stand up";
	this->ideas[67] = "I feel like resting my chin here";
	this->ideas[68] = "I should look cute";
	this->ideas[69] = "I'm a master of relaxation";
	this->ideas[70] = "I'm thinking about being outside";
	this->ideas[71] = "I should investigate that object";
	this->ideas[72] = "I love chasing shadows";
	this->ideas[73] = "I'm ready for my close-up";
	this->ideas[74] = "I need to alert the household";
	this->ideas[75] = "I will stare intensely at my human";
	this->ideas[76] = "I feel happy and energetic";
	this->ideas[77] = "I'm going to find the softest spot";
	this->ideas[78] = "I need a good scratch";
	this->ideas[79] = "I should follow the scent trail";
	this->ideas[80] = "I'm contemplating life";
	this->ideas[81] = "I love the morning sun";
	this->ideas[82] = "I'm going to make some soft noises";
	this->ideas[83] = "I need to shake off the water";
	this->ideas[84] = "I'm ready for the next meal";
	this->ideas[85] = "I will watch the leaves move";
	this->ideas[86] = "I feel like running up the stairs";
	this->ideas[87] = "I'm a highly valued family member";
	this->ideas[88] = "I should sit on the rug";
	this->ideas[89] = "I love the taste of kibble";
	this->ideas[90] = "I'm a bit bored now";
	this->ideas[91] = "I will try to communicate with barks/meows";
	this->ideas[92] = "I need to explore that corner";
	this->ideas[93] = "I'm waiting for the ball to be thrown";
	this->ideas[94] = "I feel like rolling in the grass";
	this->ideas[95] = "I'm listening to the outside world";
	this->ideas[96] = "I should ask for a hug";
	this->ideas[97] = "I love the feel of the carpet";
	this->ideas[98] = "I'm dreaming of chasing things";
	this->ideas[99] = "It is good to be me!";
}
Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}
Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
		
	return(*this);
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}