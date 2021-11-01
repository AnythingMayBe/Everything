#include <dpp/dpp.h>
#include <iostream>
 
int main()
{
    dpp::cluster bot("token");
 
    bot.on_ready([&bot](const dpp::ready_t & event) {
        std::cout << "Logged in as " << bot.me.username << "!\n";
    });
 
    bot.on_message_create([&bot](const dpp::message_create_t & event) {
        if (event.msg->content == "!ping") {
            bot.message_create(dpp::message(event.msg->channel_id, "Pong!"));
        }
    });

   
    bot.on_application_command_create([&bot](const dpp::application_command_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_application_command_delete([&bot](const dpp::application_command_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_application_command_update([&bot](const dpp::application_command_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_button_click([&bot](const dpp::button_click_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_channel_create([&bot](const dpp::channel_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_channel_delete([&bot](const dpp::channel_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_channel_pins_update([&bot](const dpp::channel_pins_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_channel_update([&bot](const dpp::channel_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_ban_add([&bot](const dpp::guild_ban_add_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_ban_remove([&bot](const dpp::guild_ban_remove_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_create([&bot](const dpp::guild_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_delete([&bot](const dpp::guild_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_emojis_update([&bot](const dpp::guild_emojis_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_integrations_update([&bot](const dpp::guild_integrations_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_join_request_delete([&bot](const dpp::guild_join_request_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_member_add([&bot](const dpp::guild_member_add_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_member_remove([&bot](const dpp::guild_member_remove_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_member_update([&bot](const dpp::guild_member_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_members_chunk([&bot](const dpp::guild_members_chunk_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_role_create([&bot](const dpp::guild_role_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_role_delete([&bot](const dpp::guild_role_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_role_update([&bot](const dpp::guild_role_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_stickers_update([&bot](const dpp::guild_stickers_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_guild_update([&bot](const dpp::guild_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_integration_create([&bot](const dpp::integration_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_integration_delete([&bot](const dpp::integration_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_integration_update([&bot](const dpp::integration_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_interaction_create([&bot](const dpp::interaction_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_invite_create([&bot](const dpp::invite_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_invite_delete([&bot](const dpp::invite_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_log([&bot](const dpp::log_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_create([&bot](const dpp::message_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_delete([&bot](const dpp::message_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_delete_bulk([&bot](const dpp::message_delete_bulk_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_reaction_add([&bot](const dpp::message_reaction_add_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_reaction_remove([&bot](const dpp::message_reaction_remove_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_reaction_remove_all([&bot](const dpp::message_reaction_remove_all_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_reaction_remove_emoji([&bot](const dpp::message_reaction_remove_emoji_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_message_update([&bot](const dpp::message_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_presence_update([&bot](const dpp::presence_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_ready([&bot](const dpp::ready_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_resumed([&bot](const dpp::resumed_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_select_click([&bot](const dpp::select_click_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_stage_instance_create([&bot](const dpp::stage_instance_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_stage_instance_delete([&bot](const dpp::stage_instance_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_create([&bot](const dpp::thread_create_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_delete([&bot](const dpp::thread_delete_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_list_sync([&bot](const dpp::thread_list_sync_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_member_update([&bot](const dpp::thread_member_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_members_update([&bot](const dpp::thread_members_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_thread_update([&bot](const dpp::thread_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_typing_start([&bot](const dpp::typing_start_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_user_update([&bot](const dpp::user_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_buffer_send([&bot](const dpp::voice_buffer_send_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_ready([&bot](const dpp::voice_ready_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_receive([&bot](const dpp::voice_receive_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_server_update([&bot](const dpp::voice_server_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_state_update([&bot](const dpp::voice_state_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_track_marker([&bot](const dpp::voice_track_marker_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_voice_user_talking([&bot](const dpp::voice_user_talking_t & event) {
        std::cout << event.raw_event << std::endl;
    });
    bot.on_webhooks_update([&bot](const dpp::webhooks_update_t & event) {
        std::cout << event.raw_event << std::endl;
    });

    bot.start(false);
    return 0;
}
