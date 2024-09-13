#include "ClapTrap.hpp" // Ensure this header file contains the ClapTrap class definition

int main()
{
    // Create ClapTrap object
    ClapTrap claptrap("CLTP");

    // Test attack functionality
    claptrap.attack("Target1");
    claptrap.attack("Target2");

    // Test takeDamage functionality
    claptrap.takeDamage(5);
    claptrap.takeDamage(10); // Damage should be capped at 0

    // Test beRepaired functionality
    claptrap.beRepaired(8);
    claptrap.beRepaired(5);

    // Test attack when energy points are depleted
    ClapTrap lowEnergyClaptrap("LowEnergy");
    lowEnergyClaptrap.attack("Target3"); // Should print no energy message
    lowEnergyClaptrap.beRepaired(5);     // Should print no energy message

    return 0;
}