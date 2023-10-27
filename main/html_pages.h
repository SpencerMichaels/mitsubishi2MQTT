/*
  mitsubishi2mqtt - Mitsubishi Heat Pump to MQTT control for Home Assistant.
  Copyright (c) 2023 gysmo38, dzungpv, shampeon, endeavour, jascdk, chrdavis, alekslyse.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
 
const char html_page_reboot[] PROGMEM = 
        "<p>_TXT_M_REBOOT_ <span id='count'>20s</span>...</p>"
        "<script>"
            "setTimeout(function() {"
                "window.location.href = '/';"
            "}, 20000);"
        "</script>";

const char html_page_reset[] PROGMEM = 
        "<p>_TXT_M_RESET_ <span id='count'>20s</span>. _TXT_M_RESET_1_ _UNIT_NAME_</p>"
;


const char html_page_save_reboot[] PROGMEM = 
        "<p>_TXT_M_SAVE_ <span id='count'>20s</span>...</p>"
        "<script>"
            "setTimeout(function() {"
                "window.location.href = '/';"
            "}, 20000);"
        "</script>"
;

const char html_page_mqtt[] PROGMEM = 
        "<div id='l1' name='l1'>"
            "<fieldset>"
               "<legend><b>&nbsp; _TXT_MQTT_TITLE_ &nbsp;</b></legend>"
                "<form method='post'>"
                    "<p><b>_TXT_MQTT_FN_</b> _TXT_MQTT_FN_DESC_"
                        "<br/>"
                        "<input id='fn' name='fn' placeholder=' ' value='_MQTT_FN_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_MQTT_HOST_</b>"
                        "<br/>"
                        "<input id='mh' name='mh' placeholder=' ' value='_MQTT_HOST_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_MQTT_PORT_</b> _TXT_MQTT_PORT_DESC_"
                        "<br/>"
                        "<input id='ml' name='ml' placeholder='1883' value='_MQTT_PORT_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_MQTT_USER_</b>"
                        "<br/>"
                        "<input id='mu' name='mu' placeholder='_TXT_MQTT_PH_USER_' value='_MQTT_USER_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_MQTT_PASSWORD_</b>"
                        "<br/>"
                        "<input id='mp' name='mp' type='password' placeholder='_TXT_MQTT_PH_PWD_' value='_MQTT_PASSWORD_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_MQTT_TOPIC_</b>"
                        "<br/>"
                        "<input id='mt' name='mt' placeholder='_TXT_MQTT_PH_TOPIC_' value='_MQTT_TOPIC_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<br/>"
                    "<button name='save' type='submit' class='button bgrn'>_TXT_SAVE_</button>"
                "</form>"
            "</fieldset>"
            "<p>"
			    "<form action='/setup' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"

        "</div>"
;

const char html_page_others[] PROGMEM = 
        "<div id='l1' name='l1'>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_OTHERS_TITLE_ &nbsp;</b></legend>"
                "<form method='post'>"
                    "<p><b>_TXT_OTHERS_HAAUTO_</b>"
                        "<select name='HAA'>"
                            "<option value='ON' _HAA_ON_>_TXT_F_ON_</option>"
                            "<option value='OFF' _HAA_OFF_>_TXT_F_OFF_</option>"
                        "</select>"
                    "</p>"
                    "<p><b>_TXT_OTHERS_HATOPIC_</b>"
                        "<br/>"
                        "<input id='haat' name='haat' placeholder=' ' value='_HAA_TOPIC_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_OTHERS_DEBUG_LOGS_</b>"
                        "<select name='DebugLogs'>"
                            "<option value='ON' _DEBUG_LOGS_ON_>_TXT_F_ON_</option>"
                            "<option value='OFF' _DEBUG_LOGS_OFF_>_TXT_F_OFF_</option>"
                        "</select>"
                    "</p>"
                    "<p><b>_TXT_OTHERS_DEBUG_PCKTS_</b>"
                        "<select name='DebugPckts'>"
                            "<option value='ON' _DEBUG_PCKTS_ON_>_TXT_F_ON_</option>"
                            "<option value='OFF' _DEBUG_PCKTS_OFF_>_TXT_F_OFF_</option>"
                        "</select>"
                    "</p>"
                    "<br/>"
                    "<button name='save' type='submit' class='button bgrn'>_TXT_SAVE_</button>"
                "</form>"
            "</fieldset>"
            "<p>"
			    "<form action='/setup' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"
        "</div>"
;

const char html_page_status[] PROGMEM = 
        "<div id='l1' name='l1'>"
            "<fieldset>"
            "<legend><b>&nbsp; _TXT_STATUS_TITLE_ &nbsp;</b></legend>"
            "_TXT_STATUS_HVAC_ => _HVAC_STATUS_"
             "<br />_TXT_RETRIES_HVAC_ => _HVAC_RETRIES_"
            "<br /> _TXT_STATUS_MQTT_ => _MQTT_STATUS_"
            "<br /> _TXT_STATUS_WIFI_IP_ => _WIFI_IP_"
            "<br /> _TXT_STATUS_WIFI_ => _WIFI_STATUS_ dBm"
            "<br /> _TXT_BUILD_VERSION_ => _BUILD_VERSION_"
            "<br /> _TXT_BUILD_DATE_ => _BUILD_DATE_"
            "<br /> _TXT_STATUS_FREEHEAP_ => _FREE_HEAP_"
            "<br /> _TXT_CURRENT_TIME_ => _CURRENT_TIME_"
            "<br /> _TXT_BOOT_TIME => _BOOT_TIME_"
            "</fieldset>"
            "<br />"
            "<p>"
			    "<form action='/' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"
        "</div>";

const char html_page_wifi[] PROGMEM = 
        "<div id='l1' name='l1'>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_WIFI_TITLE_ &nbsp;</b></legend>"
                "<form method='post'>"
                    "<p><b>_TXT_WIFI_HOST_</b> _TXT_WIFI_HOST_DESC_ "
                        "<br/>"
                        "<input id='hn' name='hn' placeholder=' ' value='_UNIT_NAME_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_WIFI_SSID_</b> _TXT_WIFI_SSID_ENTER_"
                    "<br/>"
                    "<input id='ssid' name='ssid' placeholder=' ' value='_SSID_' "
					"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "<br/>"
                    "<label for='network'>_TXT_WIFI_SSID_SELECT_</label>"
                    "<select id='network' name='network'>"
                        "_WIFI_OPTIONS_"
                    "</select>"
                    "</p>"
                    "<p><b>_TXT_WIFI_PSK_</b>"
                        "<br/>"
                        "<input type='password' id='psk' name='psk' placeholder=' ' value='_PSK_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_WIFI_OTAP_</b>"
                        "<br/>"
                        "<input type='password' id='otapwd' name='otapwd' placeholder=' ' value='_OTA_PWD_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<br/>"
                    "<button name='save' type='submit' class='button bgrn'>_TXT_SAVE_</button>"
                "</form>"
            "</fieldset>"
            "<p>"
			    "<form action='/setup' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"

        "</div>"
;

const char html_page_control[] PROGMEM = 

        "<div style='text-align:center;'>"
            "<h2>_TXT_CTRL_CTEMP_ <span id='room_temperature'>_ROOMTEMP_</span>&#176;</h2>"
        "</div>"
        "<div id='l1' name='l1'>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_CTRL_TITLE_ &nbsp;</b></legend>"
                "<div class='ctrlrow'>"
                "<p style='display: inline;'><b>_TXT_CTRL_TEMP_</b>(<span id='tempScale'>&#176;_TEMP_SCALE_</span>)"
                    "<br/>"
                    "<br/>"
                    "<button onclick='setTemp(0)' class='temp bgrn' style='text-align:center;width:30px;margin-left: 5px;margin-right: 2px;'>-</button>"
                    "<form id='FTEMP_' style='display:inline'>"
                        "<input readonly='readonly' name='TEMP' id='TEMP' type='text' value='_TEMP_' style='text-align:center;width:70px;margin-left: 5px;margin-right: 2px;' />"
                    "</form>"
                    "<button onclick='setTemp(1)' class='temp bgrn' style='text-align:center;width:30px;margin-left: 5px;margin-right: 2px;'>+</button>"
                "</p>"
                "</div>"
                "<div class='ctrlrow'>"
                "<p>"
                    "<b>_TXT_CTRL_POWER_</b>"
                    "<form id='form' onchange='this.submit()' method='post'>"
                      "<input name='PWRCHK' type='hidden' value=''>"
                      "<label class='switch'>"
                        "<input id='POWER' name='POWER' type='checkbox' value='ON' _POWER_>"
                        "<div class='sliderWidth slider round'></div>"
                     "</label>"
                    "</form>"
                "</p>"
                "</div>"
                "<div class='ctrlrow'>"
                "<p><b>_TXT_CTRL_MODE_</b>"
                    "<form onchange='this.submit()' method='post'>"
                        "<select name='MODE' id='MODE'>"
                            "<option value='AUTO' _MODE_A_>&#9851; _TXT_F_AUTO_</option>"
                            "<option value='DRY' _MODE_D_>&#128167; _TXT_F_DRY_</option>"
                            "<option value='COOL' _MODE_C_>&#10052;&#65039; _TXT_F_COOL_</option>"
                            "<option _HEAT_HIDDEN_ value='HEAT' _MODE_H_>&#9728;&#65039; _TXT_F_HEAT_</option>"
                            "<option value='FAN' _MODE_F_>   &#10051; _TXT_F_FAN_</option>"
                        "</select>"
                    "</form>"
                "</p>"
                "</div>"
                "<div class='ctrlrow'>"
                "<p><b>_TXT_CTRL_FAN_</b>"
                    "<form onchange='this.submit()' method='post'>"
                        "<select name='FAN' id='FAN'>"
                            "<option value='AUTO' _FAN_A_>&#9851; _TXT_F_AUTO_</option>"
                            "<option value='QUIET' _FAN_Q_>.... _TXT_F_QUIET_</option>"
                            "<option value='1' _FAN_1_>...: _TXT_F_SPEED_ 1</option>"
                            "<option value='2' _FAN_2_>..:: _TXT_F_SPEED_ 2</option>"
                            "<option value='3' _FAN_3_>.::: _TXT_F_SPEED_ 3</option>"
                            "<option value='4' _FAN_4_>:::: _TXT_F_SPEED_ 4</option>"
                        "</select>"
                    "</form>"
                "</p>"
                "</div>"
                "<div class='ctrlrow' _VANE_STYLE_>"
                "<p><b>_TXT_CTRL_VANE_</b>"
                    "<form onchange='this.submit()' method='post'>"
                        "<select name='VANE' id='VANE'>"
                            "<option value='AUTO' _VANE_A_>&#9851; _TXT_F_AUTO_</option>"
                            "<option value='SWING' _VANE_S_>&#9887; _TXT_F_SWING_</option>"
                            "<option value='1' _VANE_1_>&#10143; _TXT_F_POS_ 1</option>"
                            "<option value='2' _VANE_2_>&#10143; _TXT_F_POS_ 2</option>"
                            "<option value='3' _VANE_3_>&#10143; _TXT_F_POS_ 3</option>"
                            "<option value='4' _VANE_4_>&#10143; _TXT_F_POS_ 4</option>"
                            "<option value='5' _VANE_5_>&#10143; _TXT_F_POS_ 5</option>"
                        "</select>"
                    "</form>"
                "</p>"
                "</div>"
                "<div class='ctrlrow' _WIDE_VANE_STYLE_>"
                "<p><b>_TXT_CTRL_WVANE_</b>"
                    "<form onchange='this.submit()' method='post'>"
                        "<select name='WIDEVANE'>"
                            "<option value='SWING' _WVANE_S_>&#9887; _TXT_F_SWING_</option>"
                            "<option value='<<' _WVANE_1_><< _TXT_F_POS_ 1</option>"
                            "<option value='<' _WVANE_2_>< _TXT_F_POS_ 2</option>"
                            "<option value='|' _WVANE_3_>| _TXT_F_POS_ 3</option>"
                            "<option value='>' _WVANE_4_>> _TXT_F_POS_ 4</option>"
                            "<option value='>>' _WVANE_5_>>> _TXT_F_POS_ 5</option>"
                            "<option value='<>' _WVANE_6_><> _TXT_F_POS_ 6</option>"
                        "</select>"
                    "</form>"
                "</p>"
                "</div>"
            "</fieldset>"
            "<p>"
			    "<form action='/' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"
        "</div>";

const char html_page_unit[] PROGMEM = 
        "<div id='l1' name='l1'>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_UNIT_TITLE_ &nbsp;</b></legend>"
                "<form method='post' onsubmit=\"return matchPassword()\">"
                    "<p>"
                       "<b>_TXT_UNIT_LANGUAGE_</b>"
                       "<br/>"
                       "<select id='language' name='language' onchange=\"sendLanguage(this)\">"
                          "_LANGUAGE_OPTIONS_"
                       "</select>"
                    "</p>"
                    "<p>"
                        "<b>_TXT_UNIT_TEMP_</b>"
                        "<select name='tu'>"
                            "<option value='cel' _TU_CEL_>_TXT_F_CELSIUS_</option>"
                            "<option value='fah' _TU_FAH_>_TXT_F_FH_</option>"
                        "</select>"
                    "</p>"
                    "<p><b>_TXT_UNIT_STEPTEMP_</b>"
                        "<br/>"
                        "<input type='number' id='temp_step' step='0.1' min='0.1' max='1.0' name='temp_step' placeholder=' ' value='_TEMP_STEP_'>"
                    "</p>"

                    "<p>"
                        "<b>_TXT_UNIT_MODES_</b>"
                        "<select name='md'>"
                            "<option value='all' _MD_ALL_>_TXT_F_ALLMODES_</option>"
                            "<option value='nht' _MD_NONHEAT_>_TXT_F_NOHEAT_</option>"
                        "</select>"
                    "</p>"
                    "<p>"
                        "<b>_TXT_UNIT_FAN_MODES_</b>"
                        "<select name='mdf'>"
                            "<option value='allf' _MDF_ALL_>_TXT_F_ALLMODES_</option>"
                            "<option value='nqm' _MDF_NONQUIET_>_TXT_F_NOQUIET_</option>"
                        "</select>"
                    "</p>"
                    "<p><b>_TXT_UNIT_PASSWORD_</b>"
                        "<br/>"
                        "<input id='lpw' name='lpw' type='password' placeholder=' ' value='_LOGIN_PASSWORD_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_UNIT_PASSWORD_CONFIRM_</b>"
                        "<br/>"
                        "<input id='lpwc' name='lpwc' type='password' placeholder=' ' value='_LOGIN_PASSWORD_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<span id='message_not_match' style='color:red'> </span> <br>" 
                    "<p>_TXT_UNIT_LOGIN_USERNAME_ <b>admin</b></p>"
                    "<br/>"
                    "<button name='save' type='submit' class='button bgrn'>_TXT_SAVE_</button>"
                "</form>"
            "</fieldset>"
            "<p>"
			    "<form action='/setup' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"

        "</div>"
;

const char html_page_login[] PROGMEM = 
    "<script>"
        "var loginSucess = _LOGIN_SUCCESS_;"
        "document.onreadystatechange = function() {"
            "if (document.readyState === 'complete') {"
                "if (loginSucess == 1) {"
                    "var element = document.getElementById('login_form');"
                    "element.parentNode.removeChild(element);"
                "}"
            "}"
        "}"
    "</script>"
        "<div id='login_form' name='login_form'>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_LOGIN_TITLE_ &nbsp;</b></legend>"
                "<form action='/login' method='post'>"
                    "<p><b>_TXT_LOGIN_USERNAME_</b>"
                        "<input type='text' name='USERNAME' placeholder='_TXT_LOGIN_PH_USER_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<p><b>_TXT_LOGIN_PASSWORD_</b>"
                        "<input type='password' name='PASSWORD' placeholder='_TXT_LOGIN_PH_PWD_' "
						"autocomplete='off' autocorrect='off' autocapitalize='off' spellcheck='false'>"
                    "</p>"
                    "<br/>"
                    "<button name='SUBMIT' type='submit' class='button bgrn'>_TXT_LOGIN_</button>"
                "</form>"
                "<br><a href='/status'>_TXT_LOGIN_OPEN_STATUS_</a>"
                "<br>"
            "</fieldset>"
        "</div>"
        "<div"
        "_LOGIN_MSG_"
        "</div>"
;

const char html_page_upgrade[] PROGMEM = 
    "<script>"
        "function eb(s) {"
            "return document.getElementById(s);"
        "}"
    "</script>"
        "<div style='text-align:center;'>"
            "<h2>_TXT_FW_UPDATE_PAGE_</h2>"
        "</div>"
        "<div id='f1' style='display:block;'>"
            "<div class='ctrlrow' _FIRMWARE_UPLOAD_>"
            "<fieldset>"
                "<legend><b>&nbsp; _TXT_UPGRADE_INFO_ &nbsp;</b></legend>"
                "<form method='post' action='upload' enctype='multipart/form-data'>"
                    "<br>"
                    "<input type='file' accept='.bin' name='upload'>"
                    "<br>"
                    "<br>"
                    "<button type='submit' onclick=\"eb('f1').style.display='none';eb('f2').style.display='block';this.form.submit();\" class='button bgrn'>_TXT_B_UPGRADE_</button>"
                "</form>"
            "</fieldset>"
            "</div>"
            "<p>"
			    "<form action='/' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"

        "</div>"
        "<div id='f2' style='display:none;text-align:center;'><b>_TXT_UPGRADE_START_ ...</b></div>"
;

const char html_page_upload[] PROGMEM = 
        "<div style='text-align:center;'>"
            "<h2>_TXT_UPLOAD_FW_PAGE_</h2>"
        "</div>"
        "<div id='l1' name='l1'>"
            "<br>_UPLOAD_MSG_"
            "<p>"
			    "<form action='/upgrade' method='get'>"
                    "<button class='back'>_TXT_BACK_</button>"
                "</form>"
            "</p>"

        "</div>"
;
