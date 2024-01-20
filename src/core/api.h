#pragma once
#include <Arduino.h>
#include <StringUtils.h>

#define FB_MAKE_API(x) const __FlashStringHelper* x() { return F(#x); }
#define FB_MAKE_HASH(x) constexpr size_t x = sutil::SH(#x);

namespace fbapi {
FB_MAKE_API(option_ids)
FB_MAKE_API(text_entities)
FB_MAKE_API(file_id)
FB_MAKE_API(errors)
FB_MAKE_API(front_side)
FB_MAKE_API(remove_keyboard)
FB_MAKE_API(slow_mode_delay)
FB_MAKE_API(request_contact)
FB_MAKE_API(audio_file_id)
FB_MAKE_API(login_url)
FB_MAKE_API(description)
FB_MAKE_API(audio)
FB_MAKE_API(chat_join_request)
FB_MAKE_API(actor_chat)
FB_MAKE_API(media)
FB_MAKE_API(element_hash)
FB_MAKE_API(my_chat_member)
FB_MAKE_API(boost)
FB_MAKE_API(only_new_members)
FB_MAKE_API(short_description)
FB_MAKE_API(date)
FB_MAKE_API(giveaway_created)
FB_MAKE_API(sticker_type)
FB_MAKE_API(emoji_status_custom_emoji_id)
FB_MAKE_API(icon_color)
FB_MAKE_API(length)
FB_MAKE_API(active_usernames)
FB_MAKE_API(small_file_unique_id)
FB_MAKE_API(has_protected_content)
FB_MAKE_API(last_name)
FB_MAKE_API(can_post_stories)
FB_MAKE_API(is_primary)
FB_MAKE_API(switch_inline_query_current_chat)
FB_MAKE_API(winners)
FB_MAKE_API(chat_boost)
FB_MAKE_API(explanation)
FB_MAKE_API(foursquare_type)
FB_MAKE_API(message_text)
FB_MAKE_API(total_voter_count)
FB_MAKE_API(can_read_all_group_messages)
FB_MAKE_API(icon_custom_emoji_id)
FB_MAKE_API(gif_width)
FB_MAKE_API(mpeg4_file_id)
FB_MAKE_API(performer)
FB_MAKE_API(force_reply)
FB_MAKE_API(audio_duration)
FB_MAKE_API(gif_duration)
FB_MAKE_API(voice_file_id)
FB_MAKE_API(allow_channel_chats)
FB_MAKE_API(can_send_voice_notes)
FB_MAKE_API(old_chat_member)
FB_MAKE_API(shipping_address)
FB_MAKE_API(can_invite_users)
FB_MAKE_API(sticker)
FB_MAKE_API(can_manage_topics)
FB_MAKE_API(one_time_keyboard)
FB_MAKE_API(can_send_videos)
FB_MAKE_API(video_note)
FB_MAKE_API(disable_edit_message)
FB_MAKE_API(has_custom_certificate)
FB_MAKE_API(reaction)
FB_MAKE_API(type)
FB_MAKE_API(rights)
FB_MAKE_API(allowed_updates)
FB_MAKE_API(value)
FB_MAKE_API(winner_count)
FB_MAKE_API(custom_emoji_id)
FB_MAKE_API(mpeg4_duration)
FB_MAKE_API(channel_chat_created)
FB_MAKE_API(horizontal_accuracy)
FB_MAKE_API(cache_time)
FB_MAKE_API(prefer_large_media)
FB_MAKE_API(photo_url)
FB_MAKE_API(removed_chat_boost)
FB_MAKE_API(mpeg4_url)
FB_MAKE_API(message_auto_delete_time)
FB_MAKE_API(timeout)
FB_MAKE_API(document_file_id)
FB_MAKE_API(chat_has_username)
FB_MAKE_API(data)
FB_MAKE_API(supports_inline_queries)
FB_MAKE_API(can_send_documents)
FB_MAKE_API(button_text)
FB_MAKE_API(switch_inline_query)
FB_MAKE_API(story)
FB_MAKE_API(max_tip_amount)
FB_MAKE_API(message_thread_id)
FB_MAKE_API(dice)
FB_MAKE_API(message)
FB_MAKE_API(additional_chat_count)
FB_MAKE_API(video_chat_ended)
FB_MAKE_API(reverse_side)
FB_MAKE_API(disable_content_type_detection)
FB_MAKE_API(pending_update_count)
FB_MAKE_API(live_period)
FB_MAKE_API(until_date)
FB_MAKE_API(is_big)
FB_MAKE_API(edited_message)
FB_MAKE_API(poll_id)
FB_MAKE_API(country_code)
FB_MAKE_API(show_alert)
FB_MAKE_API(message_reaction_count)
FB_MAKE_API(first_name)
FB_MAKE_API(sticker_file_id)
FB_MAKE_API(google_place_id)
FB_MAKE_API(use_independent_chat_permissions)
FB_MAKE_API(accent_color_id)
FB_MAKE_API(command)
FB_MAKE_API(shipping_query)
FB_MAKE_API(needs_repainting)
FB_MAKE_API(telegram_payment_charge_id)
FB_MAKE_API(total_count)
FB_MAKE_API(custom_title)
FB_MAKE_API(height)
FB_MAKE_API(forum_topic_reopened)
FB_MAKE_API(translation)
FB_MAKE_API(chat_is_channel)
FB_MAKE_API(need_name)
FB_MAKE_API(location)
FB_MAKE_API(message_auto_delete_timer_changed)
FB_MAKE_API(giveaway_completed)
FB_MAKE_API(add_date)
FB_MAKE_API(ok)
FB_MAKE_API(general_forum_topic_unhidden)
FB_MAKE_API(gif_height)
FB_MAKE_API(new_chat_members)
FB_MAKE_API(photo_size)
FB_MAKE_API(quote_parse_mode)
FB_MAKE_API(is_premium)
FB_MAKE_API(email)
FB_MAKE_API(bio)
FB_MAKE_API(emoji_status_expiration_date)
FB_MAKE_API(web_app)
FB_MAKE_API(video_chat_scheduled)
FB_MAKE_API(from_request)
FB_MAKE_API(photo_width)
FB_MAKE_API(sticker_format)
FB_MAKE_API(switch_inline_query_chosen_chat)
FB_MAKE_API(shipping_option_id)
FB_MAKE_API(users_shared)
FB_MAKE_API(voter_count)
FB_MAKE_API(user)
FB_MAKE_API(duration)
FB_MAKE_API(small_file_id)
FB_MAKE_API(venue)
FB_MAKE_API(only_if_banned)
FB_MAKE_API(input_field_placeholder)
FB_MAKE_API(allow_user_chats)
FB_MAKE_API(is_video)
FB_MAKE_API(photo)
FB_MAKE_API(force)
FB_MAKE_API(audio_url)
FB_MAKE_API(boost_id)
FB_MAKE_API(can_post_messages)
FB_MAKE_API(entities)
FB_MAKE_API(set_name)
FB_MAKE_API(currency)
FB_MAKE_API(user_is_premium)
FB_MAKE_API(pre_checkout_query)
FB_MAKE_API(video_url)
FB_MAKE_API(user_chat_id)
FB_MAKE_API(connected_website)
FB_MAKE_API(giveaway_winners)
FB_MAKE_API(expiration_date)
FB_MAKE_API(photo_file_id)
FB_MAKE_API(request_users)
FB_MAKE_API(inline_query_id)
FB_MAKE_API(document)
FB_MAKE_API(chat_instance)
FB_MAKE_API(boosts)
FB_MAKE_API(big_file_id)
FB_MAKE_API(video_height)
FB_MAKE_API(join_by_request)
FB_MAKE_API(result_id)
FB_MAKE_API(is_personal)
FB_MAKE_API(edit_date)
FB_MAKE_API(video_chat_participants_invited)
FB_MAKE_API(new_reaction)
FB_MAKE_API(last_error_date)
FB_MAKE_API(quote_entities)
FB_MAKE_API(reactions)
FB_MAKE_API(channel_post)
FB_MAKE_API(source)
FB_MAKE_API(latitude)
FB_MAKE_API(migrate_to_chat_id)
FB_MAKE_API(suggested_tip_amounts)
FB_MAKE_API(pending_join_request_count)
FB_MAKE_API(score)
FB_MAKE_API(user_ids)
FB_MAKE_API(inline_keyboard)
FB_MAKE_API(pinned_message)
FB_MAKE_API(can_send_video_notes)
FB_MAKE_API(payload)
FB_MAKE_API(bot_username)
FB_MAKE_API(unclaimed_prize_count)
FB_MAKE_API(name)
FB_MAKE_API(chat_member)
FB_MAKE_API(giveaway_message_id)
FB_MAKE_API(thumbnail_mime_type)
FB_MAKE_API(provider_data)
FB_MAKE_API(inline_query)
FB_MAKE_API(video_duration)
FB_MAKE_API(thumbnail)
FB_MAKE_API(query)
FB_MAKE_API(position)
FB_MAKE_API(emoji)
FB_MAKE_API(file_date)
FB_MAKE_API(for_channels)
FB_MAKE_API(new_chat_title)
FB_MAKE_API(from_chat_id)
FB_MAKE_API(successful_payment)
FB_MAKE_API(close_date)
FB_MAKE_API(revoke_messages)
FB_MAKE_API(request_poll)
FB_MAKE_API(is_forum)
FB_MAKE_API(is_disabled)
FB_MAKE_API(is_automatic_forward)
FB_MAKE_API(need_phone_number)
FB_MAKE_API(offset)
FB_MAKE_API(result)
FB_MAKE_API(can_delete_stories)
FB_MAKE_API(write_access_allowed)
FB_MAKE_API(selfie)
FB_MAKE_API(remove_date)
FB_MAKE_API(thumbnail_url)
FB_MAKE_API(foursquare_id)
FB_MAKE_API(pre_checkout_query_id)
FB_MAKE_API(y_shift)
FB_MAKE_API(premium_animation)
FB_MAKE_API(files)
FB_MAKE_API(shipping_options)
FB_MAKE_API(data_hash)
FB_MAKE_API(was_refunded)
FB_MAKE_API(can_change_info)
FB_MAKE_API(can_promote_members)
FB_MAKE_API(winners_selection_date)
FB_MAKE_API(provider_token)
FB_MAKE_API(chat_is_created)
FB_MAKE_API(has_public_winners)
FB_MAKE_API(callback_data)
FB_MAKE_API(last_error_message)
FB_MAKE_API(web_app_data)
FB_MAKE_API(prefer_small_media)
FB_MAKE_API(can_add_web_page_previews)
FB_MAKE_API(longitude)
FB_MAKE_API(prices)
FB_MAKE_API(mpeg4_height)
FB_MAKE_API(error_message)
FB_MAKE_API(x_shift)
FB_MAKE_API(available_reactions)
FB_MAKE_API(premium_subscription_month_count)
FB_MAKE_API(text)
FB_MAKE_API(external_reply)
FB_MAKE_API(status)
FB_MAKE_API(google_place_type)
FB_MAKE_API(shipping_query_id)
FB_MAKE_API(is_member)
FB_MAKE_API(message_ids)
FB_MAKE_API(ip_address)
FB_MAKE_API(distance)
FB_MAKE_API(can_send_messages)
FB_MAKE_API(has_hidden_members)
FB_MAKE_API(max_connections)
FB_MAKE_API(action)
FB_MAKE_API(mask_position)
FB_MAKE_API(old_reaction)
FB_MAKE_API(bot_administrator_rights)
FB_MAKE_API(has_spoiler)
FB_MAKE_API(allow_sending_without_reply)
FB_MAKE_API(traveler)
FB_MAKE_API(sender_user_name)
FB_MAKE_API(can_manage_chat)
FB_MAKE_API(can_delete_messages)
FB_MAKE_API(country_codes)
FB_MAKE_API(need_shipping_address)
FB_MAKE_API(callback_query)
FB_MAKE_API(watcher)
FB_MAKE_API(creates_join_request)
FB_MAKE_API(message_reaction)
FB_MAKE_API(options)
FB_MAKE_API(voice_duration)
FB_MAKE_API(document_url)
FB_MAKE_API(user_id)
FB_MAKE_API(giveaway)
FB_MAKE_API(quote_position)
FB_MAKE_API(language_code)
FB_MAKE_API(menu_button)
FB_MAKE_API(game)
FB_MAKE_API(is_persistent)
FB_MAKE_API(voter_chat)
FB_MAKE_API(results)
FB_MAKE_API(chats)
FB_MAKE_API(author_signature)
FB_MAKE_API(phone_number)
FB_MAKE_API(is_manual)
FB_MAKE_API(can_manage_video_chats)
FB_MAKE_API(thumbnail_width)
FB_MAKE_API(can_edit_messages)
FB_MAKE_API(allows_multiple_answers)
FB_MAKE_API(member_limit)
FB_MAKE_API(has_media_spoiler)
FB_MAKE_API(mime_type)
FB_MAKE_API(is_closed)
FB_MAKE_API(added_to_attachment_menu)
FB_MAKE_API(last_synchronization_error_date)
FB_MAKE_API(gif_url)
FB_MAKE_API(secret_token)
FB_MAKE_API(can_set_sticker_set)
FB_MAKE_API(from)
FB_MAKE_API(invoice_payload)
FB_MAKE_API(sticker_set_name)
FB_MAKE_API(can_send_polls)
FB_MAKE_API(caption_entities)
FB_MAKE_API(can_send_audios)
FB_MAKE_API(has_restricted_voice_and_video_messages)
FB_MAKE_API(pay)
FB_MAKE_API(forward_text)
FB_MAKE_API(expire_date)
FB_MAKE_API(retry_after)
FB_MAKE_API(linked_chat_id)
FB_MAKE_API(from_attachment_menu)
FB_MAKE_API(proximity_alert_radius)
FB_MAKE_API(supports_streaming)
FB_MAKE_API(stickers)
FB_MAKE_API(can_edit_stories)
FB_MAKE_API(parse_mode)
FB_MAKE_API(drop_pending_updates)
FB_MAKE_API(explanation_parse_mode)
FB_MAKE_API(thumbnail_height)
FB_MAKE_API(width)
FB_MAKE_API(amount)
FB_MAKE_API(heading)
FB_MAKE_API(label)
FB_MAKE_API(need_email)
FB_MAKE_API(input_message_content)
FB_MAKE_API(post_code)
FB_MAKE_API(photo_height)
FB_MAKE_API(url)
FB_MAKE_API(delete_chat_photo)
FB_MAKE_API(protect_content)
FB_MAKE_API(button)
FB_MAKE_API(question)
FB_MAKE_API(provider_payment_charge_id)
FB_MAKE_API(media_group_id)
FB_MAKE_API(is_anonymous)
FB_MAKE_API(is_flexible)
FB_MAKE_API(chat_id)
FB_MAKE_API(allow_group_chats)
FB_MAKE_API(contact)
FB_MAKE_API(resize_keyboard)
FB_MAKE_API(can_pin_messages)
FB_MAKE_API(forum_topic_edited)
FB_MAKE_API(creator)
FB_MAKE_API(bot_is_member)
FB_MAKE_API(big_file_unique_id)
FB_MAKE_API(left_chat_member)
FB_MAKE_API(secret)
FB_MAKE_API(order_info)
FB_MAKE_API(reply_to_message)
FB_MAKE_API(request_id)
FB_MAKE_API(request_chat)
FB_MAKE_API(file_hashes)
FB_MAKE_API(show_above_text)
FB_MAKE_API(allow_bot_chats)
FB_MAKE_API(users)
FB_MAKE_API(next_offset)
FB_MAKE_API(can_join_groups)
FB_MAKE_API(hide_url)
FB_MAKE_API(send_phone_number_to_provider)
FB_MAKE_API(file_path)
FB_MAKE_API(profile_background_custom_emoji_id)
FB_MAKE_API(chat)
FB_MAKE_API(is_revoked)
FB_MAKE_API(chat_shared)
FB_MAKE_API(file_name)
FB_MAKE_API(invoice)
FB_MAKE_API(reply_parameters)
FB_MAKE_API(mpeg4_width)
FB_MAKE_API(is_bot)
FB_MAKE_API(video_width)
FB_MAKE_API(start_date)
FB_MAKE_API(sender_chat)
FB_MAKE_API(chat_is_forum)
FB_MAKE_API(title)
FB_MAKE_API(caption)
FB_MAKE_API(certificate)
FB_MAKE_API(selective)
FB_MAKE_API(chosen_inline_result)
FB_MAKE_API(forum_topic_created)
FB_MAKE_API(video_chat_started)
FB_MAKE_API(user_administrator_rights)
FB_MAKE_API(has_visible_history)
FB_MAKE_API(max_quantity)
FB_MAKE_API(field_name)
FB_MAKE_API(scale)
FB_MAKE_API(group_chat_created)
FB_MAKE_API(web_app_name)
FB_MAKE_API(request_location)
FB_MAKE_API(can_send_other_messages)
FB_MAKE_API(emoji_list)
FB_MAKE_API(game_short_name)
FB_MAKE_API(explanation_entities)
FB_MAKE_API(callback_query_id)
FB_MAKE_API(street_line1)
FB_MAKE_API(username)
FB_MAKE_API(new_chat_photo)
FB_MAKE_API(id)
FB_MAKE_API(request_write_access)
FB_MAKE_API(file_hash)
FB_MAKE_API(state)
FB_MAKE_API(origin)
FB_MAKE_API(point)
FB_MAKE_API(commands)
FB_MAKE_API(disable_notification)
FB_MAKE_API(is_animated)
FB_MAKE_API(permissions)
FB_MAKE_API(web_app_query_id)
FB_MAKE_API(keyboard)
FB_MAKE_API(can_be_edited)
FB_MAKE_API(user_is_bot)
FB_MAKE_API(video_file_id)
FB_MAKE_API(invite_link)
FB_MAKE_API(proximity_alert_triggered)
FB_MAKE_API(correct_option_id)
FB_MAKE_API(has_private_forwards)
FB_MAKE_API(giveaway_message)
FB_MAKE_API(supergroup_chat_created)
FB_MAKE_API(background_custom_emoji_id)
FB_MAKE_API(video)
FB_MAKE_API(address)
FB_MAKE_API(remove_caption)
FB_MAKE_API(message_id)
FB_MAKE_API(join_to_send_messages)
FB_MAKE_API(language)
FB_MAKE_API(can_restrict_members)
FB_MAKE_API(has_aggressive_anti_spam_enabled)
FB_MAKE_API(link_preview_options)
FB_MAKE_API(photos)
FB_MAKE_API(city)
FB_MAKE_API(via_bot)
FB_MAKE_API(passport_data)
FB_MAKE_API(can_send_photos)
FB_MAKE_API(edited_channel_post)
FB_MAKE_API(total_amount)
FB_MAKE_API(animation)
FB_MAKE_API(general_forum_topic_hidden)
FB_MAKE_API(limit)
FB_MAKE_API(chat_type)
FB_MAKE_API(street_line2)
FB_MAKE_API(poll_answer)
FB_MAKE_API(reply_markup)
FB_MAKE_API(inline_message_id)
FB_MAKE_API(keywords)
FB_MAKE_API(update_id)
FB_MAKE_API(quote)
FB_MAKE_API(hash)
FB_MAKE_API(file_unique_id)
FB_MAKE_API(vcard)
FB_MAKE_API(poll)
FB_MAKE_API(sender_chat_id)
FB_MAKE_API(scope)
FB_MAKE_API(callback_game)
FB_MAKE_API(profile_accent_color_id)
FB_MAKE_API(is_unclaimed)
FB_MAKE_API(prize_description)
FB_MAKE_API(sender_user)
FB_MAKE_API(forward_origin)
FB_MAKE_API(file_size)
FB_MAKE_API(start_parameter)
FB_MAKE_API(gif_file_id)
FB_MAKE_API(credentials)
FB_MAKE_API(send_email_to_provider)
FB_MAKE_API(open_period)
FB_MAKE_API(migrate_from_chat_id)
FB_MAKE_API(new_chat_member)
FB_MAKE_API(forum_topic_closed)
FB_MAKE_API(custom_emoji_ids)
FB_MAKE_API(via_chat_folder_invite_link)
FB_MAKE_API(voice_url)
FB_MAKE_API(is_topic_message)
FB_MAKE_API(voice)
}

namespace fbhash {
FB_MAKE_HASH(option_ids)
FB_MAKE_HASH(text_entities)
FB_MAKE_HASH(file_id)
FB_MAKE_HASH(errors)
FB_MAKE_HASH(front_side)
FB_MAKE_HASH(remove_keyboard)
FB_MAKE_HASH(slow_mode_delay)
FB_MAKE_HASH(request_contact)
FB_MAKE_HASH(audio_file_id)
FB_MAKE_HASH(login_url)
FB_MAKE_HASH(description)
FB_MAKE_HASH(audio)
FB_MAKE_HASH(chat_join_request)
FB_MAKE_HASH(actor_chat)
FB_MAKE_HASH(media)
FB_MAKE_HASH(element_hash)
FB_MAKE_HASH(my_chat_member)
FB_MAKE_HASH(boost)
FB_MAKE_HASH(only_new_members)
FB_MAKE_HASH(short_description)
FB_MAKE_HASH(date)
FB_MAKE_HASH(giveaway_created)
FB_MAKE_HASH(sticker_type)
FB_MAKE_HASH(emoji_status_custom_emoji_id)
FB_MAKE_HASH(icon_color)
FB_MAKE_HASH(length)
FB_MAKE_HASH(active_usernames)
FB_MAKE_HASH(small_file_unique_id)
FB_MAKE_HASH(has_protected_content)
FB_MAKE_HASH(last_name)
FB_MAKE_HASH(can_post_stories)
FB_MAKE_HASH(is_primary)
FB_MAKE_HASH(switch_inline_query_current_chat)
FB_MAKE_HASH(winners)
FB_MAKE_HASH(chat_boost)
FB_MAKE_HASH(explanation)
FB_MAKE_HASH(foursquare_type)
FB_MAKE_HASH(message_text)
FB_MAKE_HASH(total_voter_count)
FB_MAKE_HASH(can_read_all_group_messages)
FB_MAKE_HASH(icon_custom_emoji_id)
FB_MAKE_HASH(gif_width)
FB_MAKE_HASH(mpeg4_file_id)
FB_MAKE_HASH(performer)
FB_MAKE_HASH(force_reply)
FB_MAKE_HASH(audio_duration)
FB_MAKE_HASH(gif_duration)
FB_MAKE_HASH(voice_file_id)
FB_MAKE_HASH(allow_channel_chats)
FB_MAKE_HASH(can_send_voice_notes)
FB_MAKE_HASH(old_chat_member)
FB_MAKE_HASH(shipping_address)
FB_MAKE_HASH(can_invite_users)
FB_MAKE_HASH(sticker)
FB_MAKE_HASH(can_manage_topics)
FB_MAKE_HASH(one_time_keyboard)
FB_MAKE_HASH(can_send_videos)
FB_MAKE_HASH(video_note)
FB_MAKE_HASH(disable_edit_message)
FB_MAKE_HASH(has_custom_certificate)
FB_MAKE_HASH(reaction)
FB_MAKE_HASH(type)
FB_MAKE_HASH(rights)
FB_MAKE_HASH(allowed_updates)
FB_MAKE_HASH(value)
FB_MAKE_HASH(winner_count)
FB_MAKE_HASH(custom_emoji_id)
FB_MAKE_HASH(mpeg4_duration)
FB_MAKE_HASH(channel_chat_created)
FB_MAKE_HASH(horizontal_accuracy)
FB_MAKE_HASH(cache_time)
FB_MAKE_HASH(prefer_large_media)
FB_MAKE_HASH(photo_url)
FB_MAKE_HASH(removed_chat_boost)
FB_MAKE_HASH(mpeg4_url)
FB_MAKE_HASH(message_auto_delete_time)
FB_MAKE_HASH(timeout)
FB_MAKE_HASH(document_file_id)
FB_MAKE_HASH(chat_has_username)
FB_MAKE_HASH(data)
FB_MAKE_HASH(supports_inline_queries)
FB_MAKE_HASH(can_send_documents)
FB_MAKE_HASH(button_text)
FB_MAKE_HASH(switch_inline_query)
FB_MAKE_HASH(story)
FB_MAKE_HASH(max_tip_amount)
FB_MAKE_HASH(message_thread_id)
FB_MAKE_HASH(dice)
FB_MAKE_HASH(message)
FB_MAKE_HASH(additional_chat_count)
FB_MAKE_HASH(video_chat_ended)
FB_MAKE_HASH(reverse_side)
FB_MAKE_HASH(disable_content_type_detection)
FB_MAKE_HASH(pending_update_count)
FB_MAKE_HASH(live_period)
FB_MAKE_HASH(until_date)
FB_MAKE_HASH(is_big)
FB_MAKE_HASH(edited_message)
FB_MAKE_HASH(poll_id)
FB_MAKE_HASH(country_code)
FB_MAKE_HASH(show_alert)
FB_MAKE_HASH(message_reaction_count)
FB_MAKE_HASH(first_name)
FB_MAKE_HASH(sticker_file_id)
FB_MAKE_HASH(google_place_id)
FB_MAKE_HASH(use_independent_chat_permissions)
FB_MAKE_HASH(accent_color_id)
FB_MAKE_HASH(command)
FB_MAKE_HASH(shipping_query)
FB_MAKE_HASH(needs_repainting)
FB_MAKE_HASH(telegram_payment_charge_id)
FB_MAKE_HASH(total_count)
FB_MAKE_HASH(custom_title)
FB_MAKE_HASH(height)
FB_MAKE_HASH(forum_topic_reopened)
FB_MAKE_HASH(translation)
FB_MAKE_HASH(chat_is_channel)
FB_MAKE_HASH(need_name)
FB_MAKE_HASH(location)
FB_MAKE_HASH(message_auto_delete_timer_changed)
FB_MAKE_HASH(giveaway_completed)
FB_MAKE_HASH(add_date)
FB_MAKE_HASH(ok)
FB_MAKE_HASH(general_forum_topic_unhidden)
FB_MAKE_HASH(gif_height)
FB_MAKE_HASH(new_chat_members)
FB_MAKE_HASH(photo_size)
FB_MAKE_HASH(quote_parse_mode)
FB_MAKE_HASH(is_premium)
FB_MAKE_HASH(email)
FB_MAKE_HASH(bio)
FB_MAKE_HASH(emoji_status_expiration_date)
FB_MAKE_HASH(web_app)
FB_MAKE_HASH(video_chat_scheduled)
FB_MAKE_HASH(from_request)
FB_MAKE_HASH(photo_width)
FB_MAKE_HASH(sticker_format)
FB_MAKE_HASH(switch_inline_query_chosen_chat)
FB_MAKE_HASH(shipping_option_id)
FB_MAKE_HASH(users_shared)
FB_MAKE_HASH(voter_count)
FB_MAKE_HASH(user)
FB_MAKE_HASH(duration)
FB_MAKE_HASH(small_file_id)
FB_MAKE_HASH(venue)
FB_MAKE_HASH(only_if_banned)
FB_MAKE_HASH(input_field_placeholder)
FB_MAKE_HASH(allow_user_chats)
FB_MAKE_HASH(is_video)
FB_MAKE_HASH(photo)
FB_MAKE_HASH(force)
FB_MAKE_HASH(audio_url)
FB_MAKE_HASH(boost_id)
FB_MAKE_HASH(can_post_messages)
FB_MAKE_HASH(entities)
FB_MAKE_HASH(set_name)
FB_MAKE_HASH(currency)
FB_MAKE_HASH(user_is_premium)
FB_MAKE_HASH(pre_checkout_query)
FB_MAKE_HASH(video_url)
FB_MAKE_HASH(user_chat_id)
FB_MAKE_HASH(connected_website)
FB_MAKE_HASH(giveaway_winners)
FB_MAKE_HASH(expiration_date)
FB_MAKE_HASH(photo_file_id)
FB_MAKE_HASH(request_users)
FB_MAKE_HASH(inline_query_id)
FB_MAKE_HASH(document)
FB_MAKE_HASH(chat_instance)
FB_MAKE_HASH(boosts)
FB_MAKE_HASH(big_file_id)
FB_MAKE_HASH(video_height)
FB_MAKE_HASH(join_by_request)
FB_MAKE_HASH(result_id)
FB_MAKE_HASH(is_personal)
FB_MAKE_HASH(edit_date)
FB_MAKE_HASH(video_chat_participants_invited)
FB_MAKE_HASH(new_reaction)
FB_MAKE_HASH(last_error_date)
FB_MAKE_HASH(quote_entities)
FB_MAKE_HASH(reactions)
FB_MAKE_HASH(channel_post)
FB_MAKE_HASH(source)
FB_MAKE_HASH(latitude)
FB_MAKE_HASH(migrate_to_chat_id)
FB_MAKE_HASH(suggested_tip_amounts)
FB_MAKE_HASH(pending_join_request_count)
FB_MAKE_HASH(score)
FB_MAKE_HASH(user_ids)
FB_MAKE_HASH(inline_keyboard)
FB_MAKE_HASH(pinned_message)
FB_MAKE_HASH(can_send_video_notes)
FB_MAKE_HASH(payload)
FB_MAKE_HASH(bot_username)
FB_MAKE_HASH(unclaimed_prize_count)
FB_MAKE_HASH(name)
FB_MAKE_HASH(chat_member)
FB_MAKE_HASH(giveaway_message_id)
FB_MAKE_HASH(thumbnail_mime_type)
FB_MAKE_HASH(provider_data)
FB_MAKE_HASH(inline_query)
FB_MAKE_HASH(video_duration)
FB_MAKE_HASH(thumbnail)
FB_MAKE_HASH(query)
FB_MAKE_HASH(position)
FB_MAKE_HASH(emoji)
FB_MAKE_HASH(file_date)
FB_MAKE_HASH(for_channels)
FB_MAKE_HASH(new_chat_title)
FB_MAKE_HASH(from_chat_id)
FB_MAKE_HASH(successful_payment)
FB_MAKE_HASH(close_date)
FB_MAKE_HASH(revoke_messages)
FB_MAKE_HASH(request_poll)
FB_MAKE_HASH(is_forum)
FB_MAKE_HASH(is_disabled)
FB_MAKE_HASH(is_automatic_forward)
FB_MAKE_HASH(need_phone_number)
FB_MAKE_HASH(offset)
FB_MAKE_HASH(result)
FB_MAKE_HASH(can_delete_stories)
FB_MAKE_HASH(write_access_allowed)
FB_MAKE_HASH(selfie)
FB_MAKE_HASH(remove_date)
FB_MAKE_HASH(thumbnail_url)
FB_MAKE_HASH(foursquare_id)
FB_MAKE_HASH(pre_checkout_query_id)
FB_MAKE_HASH(y_shift)
FB_MAKE_HASH(premium_animation)
FB_MAKE_HASH(files)
FB_MAKE_HASH(shipping_options)
FB_MAKE_HASH(data_hash)
FB_MAKE_HASH(was_refunded)
FB_MAKE_HASH(can_change_info)
FB_MAKE_HASH(can_promote_members)
FB_MAKE_HASH(winners_selection_date)
FB_MAKE_HASH(provider_token)
FB_MAKE_HASH(chat_is_created)
FB_MAKE_HASH(has_public_winners)
FB_MAKE_HASH(callback_data)
FB_MAKE_HASH(last_error_message)
FB_MAKE_HASH(web_app_data)
FB_MAKE_HASH(prefer_small_media)
FB_MAKE_HASH(can_add_web_page_previews)
FB_MAKE_HASH(longitude)
FB_MAKE_HASH(prices)
FB_MAKE_HASH(mpeg4_height)
FB_MAKE_HASH(error_message)
FB_MAKE_HASH(x_shift)
FB_MAKE_HASH(available_reactions)
FB_MAKE_HASH(premium_subscription_month_count)
FB_MAKE_HASH(text)
FB_MAKE_HASH(external_reply)
FB_MAKE_HASH(status)
FB_MAKE_HASH(google_place_type)
FB_MAKE_HASH(shipping_query_id)
FB_MAKE_HASH(is_member)
FB_MAKE_HASH(message_ids)
FB_MAKE_HASH(ip_address)
FB_MAKE_HASH(distance)
FB_MAKE_HASH(can_send_messages)
FB_MAKE_HASH(has_hidden_members)
FB_MAKE_HASH(max_connections)
FB_MAKE_HASH(action)
FB_MAKE_HASH(mask_position)
FB_MAKE_HASH(old_reaction)
FB_MAKE_HASH(bot_administrator_rights)
FB_MAKE_HASH(has_spoiler)
FB_MAKE_HASH(allow_sending_without_reply)
FB_MAKE_HASH(traveler)
FB_MAKE_HASH(sender_user_name)
FB_MAKE_HASH(can_manage_chat)
FB_MAKE_HASH(can_delete_messages)
FB_MAKE_HASH(country_codes)
FB_MAKE_HASH(need_shipping_address)
FB_MAKE_HASH(callback_query)
FB_MAKE_HASH(watcher)
FB_MAKE_HASH(creates_join_request)
FB_MAKE_HASH(message_reaction)
FB_MAKE_HASH(options)
FB_MAKE_HASH(voice_duration)
FB_MAKE_HASH(document_url)
FB_MAKE_HASH(user_id)
FB_MAKE_HASH(giveaway)
FB_MAKE_HASH(quote_position)
FB_MAKE_HASH(language_code)
FB_MAKE_HASH(menu_button)
FB_MAKE_HASH(game)
FB_MAKE_HASH(is_persistent)
FB_MAKE_HASH(voter_chat)
FB_MAKE_HASH(results)
FB_MAKE_HASH(chats)
FB_MAKE_HASH(author_signature)
FB_MAKE_HASH(phone_number)
FB_MAKE_HASH(is_manual)
FB_MAKE_HASH(can_manage_video_chats)
FB_MAKE_HASH(thumbnail_width)
FB_MAKE_HASH(can_edit_messages)
FB_MAKE_HASH(allows_multiple_answers)
FB_MAKE_HASH(member_limit)
FB_MAKE_HASH(has_media_spoiler)
FB_MAKE_HASH(mime_type)
FB_MAKE_HASH(is_closed)
FB_MAKE_HASH(added_to_attachment_menu)
FB_MAKE_HASH(last_synchronization_error_date)
FB_MAKE_HASH(gif_url)
FB_MAKE_HASH(secret_token)
FB_MAKE_HASH(can_set_sticker_set)
FB_MAKE_HASH(from)
FB_MAKE_HASH(invoice_payload)
FB_MAKE_HASH(sticker_set_name)
FB_MAKE_HASH(can_send_polls)
FB_MAKE_HASH(caption_entities)
FB_MAKE_HASH(can_send_audios)
FB_MAKE_HASH(has_restricted_voice_and_video_messages)
FB_MAKE_HASH(pay)
FB_MAKE_HASH(forward_text)
FB_MAKE_HASH(expire_date)
FB_MAKE_HASH(retry_after)
FB_MAKE_HASH(linked_chat_id)
FB_MAKE_HASH(from_attachment_menu)
FB_MAKE_HASH(proximity_alert_radius)
FB_MAKE_HASH(supports_streaming)
FB_MAKE_HASH(stickers)
FB_MAKE_HASH(can_edit_stories)
FB_MAKE_HASH(parse_mode)
FB_MAKE_HASH(drop_pending_updates)
FB_MAKE_HASH(explanation_parse_mode)
FB_MAKE_HASH(thumbnail_height)
FB_MAKE_HASH(width)
FB_MAKE_HASH(amount)
FB_MAKE_HASH(heading)
FB_MAKE_HASH(label)
FB_MAKE_HASH(need_email)
FB_MAKE_HASH(input_message_content)
FB_MAKE_HASH(post_code)
FB_MAKE_HASH(photo_height)
FB_MAKE_HASH(url)
FB_MAKE_HASH(delete_chat_photo)
FB_MAKE_HASH(protect_content)
FB_MAKE_HASH(button)
FB_MAKE_HASH(question)
FB_MAKE_HASH(provider_payment_charge_id)
FB_MAKE_HASH(media_group_id)
FB_MAKE_HASH(is_anonymous)
FB_MAKE_HASH(is_flexible)
FB_MAKE_HASH(chat_id)
FB_MAKE_HASH(allow_group_chats)
FB_MAKE_HASH(contact)
FB_MAKE_HASH(resize_keyboard)
FB_MAKE_HASH(can_pin_messages)
FB_MAKE_HASH(forum_topic_edited)
FB_MAKE_HASH(creator)
FB_MAKE_HASH(bot_is_member)
FB_MAKE_HASH(big_file_unique_id)
FB_MAKE_HASH(left_chat_member)
FB_MAKE_HASH(secret)
FB_MAKE_HASH(order_info)
FB_MAKE_HASH(reply_to_message)
FB_MAKE_HASH(request_id)
FB_MAKE_HASH(request_chat)
FB_MAKE_HASH(file_hashes)
FB_MAKE_HASH(show_above_text)
FB_MAKE_HASH(allow_bot_chats)
FB_MAKE_HASH(users)
FB_MAKE_HASH(next_offset)
FB_MAKE_HASH(can_join_groups)
FB_MAKE_HASH(hide_url)
FB_MAKE_HASH(send_phone_number_to_provider)
FB_MAKE_HASH(file_path)
FB_MAKE_HASH(profile_background_custom_emoji_id)
FB_MAKE_HASH(chat)
FB_MAKE_HASH(is_revoked)
FB_MAKE_HASH(chat_shared)
FB_MAKE_HASH(file_name)
FB_MAKE_HASH(invoice)
FB_MAKE_HASH(reply_parameters)
FB_MAKE_HASH(mpeg4_width)
FB_MAKE_HASH(is_bot)
FB_MAKE_HASH(video_width)
FB_MAKE_HASH(start_date)
FB_MAKE_HASH(sender_chat)
FB_MAKE_HASH(chat_is_forum)
FB_MAKE_HASH(title)
FB_MAKE_HASH(caption)
FB_MAKE_HASH(certificate)
FB_MAKE_HASH(selective)
FB_MAKE_HASH(chosen_inline_result)
FB_MAKE_HASH(forum_topic_created)
FB_MAKE_HASH(video_chat_started)
FB_MAKE_HASH(user_administrator_rights)
FB_MAKE_HASH(has_visible_history)
FB_MAKE_HASH(max_quantity)
FB_MAKE_HASH(field_name)
FB_MAKE_HASH(scale)
FB_MAKE_HASH(group_chat_created)
FB_MAKE_HASH(web_app_name)
FB_MAKE_HASH(request_location)
FB_MAKE_HASH(can_send_other_messages)
FB_MAKE_HASH(emoji_list)
FB_MAKE_HASH(game_short_name)
FB_MAKE_HASH(explanation_entities)
FB_MAKE_HASH(callback_query_id)
FB_MAKE_HASH(street_line1)
FB_MAKE_HASH(username)
FB_MAKE_HASH(new_chat_photo)
FB_MAKE_HASH(id)
FB_MAKE_HASH(request_write_access)
FB_MAKE_HASH(file_hash)
FB_MAKE_HASH(state)
FB_MAKE_HASH(origin)
FB_MAKE_HASH(point)
FB_MAKE_HASH(commands)
FB_MAKE_HASH(disable_notification)
FB_MAKE_HASH(is_animated)
FB_MAKE_HASH(permissions)
FB_MAKE_HASH(web_app_query_id)
FB_MAKE_HASH(keyboard)
FB_MAKE_HASH(can_be_edited)
FB_MAKE_HASH(user_is_bot)
FB_MAKE_HASH(video_file_id)
FB_MAKE_HASH(invite_link)
FB_MAKE_HASH(proximity_alert_triggered)
FB_MAKE_HASH(correct_option_id)
FB_MAKE_HASH(has_private_forwards)
FB_MAKE_HASH(giveaway_message)
FB_MAKE_HASH(supergroup_chat_created)
FB_MAKE_HASH(background_custom_emoji_id)
FB_MAKE_HASH(video)
FB_MAKE_HASH(address)
FB_MAKE_HASH(remove_caption)
FB_MAKE_HASH(message_id)
FB_MAKE_HASH(join_to_send_messages)
FB_MAKE_HASH(language)
FB_MAKE_HASH(can_restrict_members)
FB_MAKE_HASH(has_aggressive_anti_spam_enabled)
FB_MAKE_HASH(link_preview_options)
FB_MAKE_HASH(photos)
FB_MAKE_HASH(city)
FB_MAKE_HASH(via_bot)
FB_MAKE_HASH(passport_data)
FB_MAKE_HASH(can_send_photos)
FB_MAKE_HASH(edited_channel_post)
FB_MAKE_HASH(total_amount)
FB_MAKE_HASH(animation)
FB_MAKE_HASH(general_forum_topic_hidden)
FB_MAKE_HASH(limit)
FB_MAKE_HASH(chat_type)
FB_MAKE_HASH(street_line2)
FB_MAKE_HASH(poll_answer)
FB_MAKE_HASH(reply_markup)
FB_MAKE_HASH(inline_message_id)
FB_MAKE_HASH(keywords)
FB_MAKE_HASH(update_id)
FB_MAKE_HASH(quote)
FB_MAKE_HASH(hash)
FB_MAKE_HASH(file_unique_id)
FB_MAKE_HASH(vcard)
FB_MAKE_HASH(poll)
FB_MAKE_HASH(sender_chat_id)
FB_MAKE_HASH(scope)
FB_MAKE_HASH(callback_game)
FB_MAKE_HASH(profile_accent_color_id)
FB_MAKE_HASH(is_unclaimed)
FB_MAKE_HASH(prize_description)
FB_MAKE_HASH(sender_user)
FB_MAKE_HASH(forward_origin)
FB_MAKE_HASH(file_size)
FB_MAKE_HASH(start_parameter)
FB_MAKE_HASH(gif_file_id)
FB_MAKE_HASH(credentials)
FB_MAKE_HASH(send_email_to_provider)
FB_MAKE_HASH(open_period)
FB_MAKE_HASH(migrate_from_chat_id)
FB_MAKE_HASH(new_chat_member)
FB_MAKE_HASH(forum_topic_closed)
FB_MAKE_HASH(custom_emoji_ids)
FB_MAKE_HASH(via_chat_folder_invite_link)
FB_MAKE_HASH(voice_url)
FB_MAKE_HASH(is_topic_message)
FB_MAKE_HASH(voice)
}

namespace fbcmd {
FB_MAKE_API(sendPhoto)
FB_MAKE_API(getChat)
FB_MAKE_API(setChatAdministratorCustomTitle)
FB_MAKE_API(exportChatInviteLink)
FB_MAKE_API(editForumTopic)
FB_MAKE_API(deleteForumTopic)
FB_MAKE_API(sendGame)
FB_MAKE_API(getWebhookInfo)
FB_MAKE_API(forwardMessage)
FB_MAKE_API(sendContact)
FB_MAKE_API(deleteChatStickerSet)
FB_MAKE_API(getCustomEmojiStickers)
FB_MAKE_API(deleteChatPhoto)
FB_MAKE_API(sendChatAction)
FB_MAKE_API(getMyShortDescription)
FB_MAKE_API(setStickerPositionInSet)
FB_MAKE_API(close)
FB_MAKE_API(sendVideoNote)
FB_MAKE_API(setCustomEmojiStickerSetThumbnail)
FB_MAKE_API(promoteChatMember)
FB_MAKE_API(sendDice)
FB_MAKE_API(setMyDescription)
FB_MAKE_API(setMyName)
FB_MAKE_API(setChatPhoto)
FB_MAKE_API(unpinAllGeneralForumTopicMessages)
FB_MAKE_API(sendAudio)
FB_MAKE_API(editMessageCaption)
FB_MAKE_API(setChatMenuButton)
FB_MAKE_API(answerCallbackQuery)
FB_MAKE_API(copyMessages)
FB_MAKE_API(sendInvoice)
FB_MAKE_API(createChatInviteLink)
FB_MAKE_API(setStickerSetTitle)
FB_MAKE_API(editMessageLiveLocation)
FB_MAKE_API(getChatMember)
FB_MAKE_API(answerWebAppQuery)
FB_MAKE_API(editGeneralForumTopic)
FB_MAKE_API(setMyShortDescription)
FB_MAKE_API(setMyCommands)
FB_MAKE_API(answerInlineQuery)
FB_MAKE_API(getMyCommands)
FB_MAKE_API(setChatTitle)
FB_MAKE_API(setStickerKeywords)
FB_MAKE_API(getMe)
FB_MAKE_API(forwardMessages)
FB_MAKE_API(hideGeneralForumTopic)
FB_MAKE_API(sendSticker)
FB_MAKE_API(declineChatJoinRequest)
FB_MAKE_API(getChatMemberCount)
FB_MAKE_API(setMessageReaction)
FB_MAKE_API(editMessageReplyMarkup)
FB_MAKE_API(answerPreCheckoutQuery)
FB_MAKE_API(editChatInviteLink)
FB_MAKE_API(copyMessage)
FB_MAKE_API(closeGeneralForumTopic)
FB_MAKE_API(reopenForumTopic)
FB_MAKE_API(unbanChatSenderChat)
FB_MAKE_API(sendMediaGroup)
FB_MAKE_API(unpinAllForumTopicMessages)
FB_MAKE_API(stopMessageLiveLocation)
FB_MAKE_API(closeForumTopic)
FB_MAKE_API(restrictChatMember)
FB_MAKE_API(getGameHighScores)
FB_MAKE_API(deleteWebhook)
FB_MAKE_API(deleteStickerFromSet)
FB_MAKE_API(leaveChat)
FB_MAKE_API(logOut)
FB_MAKE_API(deleteStickerSet)
FB_MAKE_API(editMessageText)
FB_MAKE_API(getForumTopicIconStickers)
FB_MAKE_API(setChatDescription)
FB_MAKE_API(getMyDefaultAdministratorRights)
FB_MAKE_API(unpinAllChatMessages)
FB_MAKE_API(getFile)
FB_MAKE_API(editMessageMedia)
FB_MAKE_API(getUserChatBoosts)
FB_MAKE_API(reopenGeneralForumTopic)
FB_MAKE_API(answerShippingQuery)
FB_MAKE_API(sendVoice)
FB_MAKE_API(deleteMessage)
FB_MAKE_API(getMyDescription)
FB_MAKE_API(setStickerSetThumbnail)
FB_MAKE_API(getStickerSet)
FB_MAKE_API(revokeChatInviteLink)
FB_MAKE_API(sendAnimation)
FB_MAKE_API(sendMessage)
FB_MAKE_API(unhideGeneralForumTopic)
FB_MAKE_API(unbanChatMember)
FB_MAKE_API(createNewStickerSet)
FB_MAKE_API(getUserProfilePhotos)
FB_MAKE_API(stopPoll)
FB_MAKE_API(createForumTopic)
FB_MAKE_API(deleteMessages)
FB_MAKE_API(setChatStickerSet)
FB_MAKE_API(setWebhook)
FB_MAKE_API(banChatMember)
FB_MAKE_API(getChatAdministrators)
FB_MAKE_API(setMyDefaultAdministratorRights)
FB_MAKE_API(getChatMenuButton)
FB_MAKE_API(approveChatJoinRequest)
FB_MAKE_API(setGameScore)
FB_MAKE_API(getMyName)
FB_MAKE_API(setChatPermissions)
FB_MAKE_API(sendVenue)
FB_MAKE_API(deleteMyCommands)
FB_MAKE_API(sendPoll)
FB_MAKE_API(getUpdates)
FB_MAKE_API(sendVideo)
FB_MAKE_API(pinChatMessage)
FB_MAKE_API(sendDocument)
FB_MAKE_API(setStickerEmojiList)
FB_MAKE_API(unpinChatMessage)
FB_MAKE_API(uploadStickerFile)
FB_MAKE_API(addStickerToSet)
FB_MAKE_API(createInvoiceLink)
FB_MAKE_API(setStickerMaskPosition)
FB_MAKE_API(setPassportDataErrors)
FB_MAKE_API(sendLocation)
FB_MAKE_API(banChatSenderChat)
}