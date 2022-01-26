#include <dpp/dpp.h>
#include <iostream>

int main() {
    // Init
    dpp::cluster bot("ODc4NTgwNDU2NzA5MjkyMDUz.YSDP0A.5108bZ_8eR5izYq8iinTvRDqV1Q");

    bot.on_ready([&bot](const auto & event) {
        std::cout << "Logged in as " << bot.me.username << std::endl;
    });

    bot.on_log([&bot](const dpp::log_t & event) {
        std::cout << event.message << std::endl;
    });

    // Start bot
    bot.start(false);
    return 0;
}