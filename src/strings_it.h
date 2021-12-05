/**
 * strings_en.h
 * English strings for
 * AsyncWiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @author LBussy
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html><html lang='en'><head><meta name='format-detection' content='telephone=no'><meta charset='UTF-8'><meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/><title>{v}</title>";
const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
                                   "document.getElementById('s').value=l.innerText||l.textContent;"
                                   "p = l.nextElementSibling.classList.contains('l');"
                                   "document.getElementById('p').disabled = !p;"
                                   "if(p)document.getElementById('p').focus();}</script>";

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='wrap'>";
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[] PROGMEM = "<h1>{v}</h1><h3>WiFi Manager</h3>";
const char *const HTTP_PORTAL_MENU[] PROGMEM = {
    "<form action='/wifi'    method='get'><button>Configura il WiFi</button></form><br/>\n",           // MENU_WIFI
    "<form action='/0wifi'   method='get'><button>Configura il WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
    "<form action='/info'    method='get'><button>Informazioni</button></form><br/>\n",                // MENU_INFO
    "<form action='/param'   method='get'><button>Setup</button></form><br/>\n",                       // MENU_PARAM
    "<form action='/close'   method='get'><button>Chiudi</button></form><br/>\n",                      // MENU_CLOSE
    "<form action='/restart' method='get'><button>Riavvia</button></form><br/>\n",                     // MENU_RESTART
    "<form action='/exit'    method='get'><button>Esci</button></form><br/>\n",                        // MENU_EXIT
    "<form action='/erase'   method='get'><button class='D'>Cancella</button></form><br/>\n",          // MENU_ERASE
    "<hr><br/>"                                                                                        // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";
const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // RSSI icons
const char HTTP_ITEM_QP[] PROGMEM = "<div class='q {h}'>{r}%</div>";                                                 // RSSI percentage
const char HTTP_ITEM[] PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>";                        // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[] PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[] PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[] PROGMEM = "<br/><br/><button type='submit'>Salva</button></form>";
const char HTTP_FORM_LABEL[] PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[] PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[] PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Ricarica</button></form>";
const char HTTP_SAVED[] PROGMEM = "<div class='msg'>Salvataggio credenziali in corso<br/>Sto provando a connettermi alla rete.<br />Se fallisco riconnettiti all'AP per riprovare.</div>";
const char HTTP_PARAMSAVED[] PROGMEM = "<div class='msg S'>Salvato.<br/></div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[] PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Cancella la configurazione WiFi</button></form>";
const char HTTP_BACKBTN[] PROGMEM = "<hr><br/><form action='/' method='get'><button>Indietro</button></form>";

const char HTTP_STATUS_ON[] PROGMEM = "<div class='msg S'><strong>Connesso</strong> a {v}<br/><em><small>con IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[] PROGMEM = "<div class='msg {c}'><strong>Non connesso</strong> a {v}{r}</div>";
const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/>Autenticazione fallita."; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "<br/>AP non trovato.";         // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/>Impossibile connettersi.";    // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[] PROGMEM = "<div class='msg'>No AP set.</div>";
const char HTTP_BR[] PROGMEM = "<br/>";

const char HTTP_STYLE[] PROGMEM = "<style>"
                                  ".c,body{text-align:center;font-family:verdana}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
                                  "input,button,.msg{border-radius:.3rem;width: 100%}"
                                  "button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
                                  "input[type='file']{border:1px solid #1fa3ec}"
                                  ".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
                                  // links
                                  "a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
                                  // quality icons
                                  ".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
                                  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
                                  // icons @2x media query (32px rescaled)
                                  "@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
                                  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
                                  "background-size: 95px 16px;}}"
                                  // msg callouts
                                  ".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
                                  // lists
                                  "dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
                                  "td{vertical-align: top;}"
                                  ".h{display:none}"
                                  "button.D{background-color:#dc3630}"
                                  // invert
                                  "body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
                                  "body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
                                  "body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
                                  "input:disabled {opacity: 0.5;}"
                                  "</style>";

const char HTTP_HELP[] PROGMEM =
    "<br/><h3>Pagine disponibili</h3><hr>"
    "<table class='table'>"
    "<thead><tr><th>Pagina</th><th>Funzione</th></tr></thead><tbody>"
    "<tr><td><a href='/'>/</a></td>"
    "<td>Pagina menu.</td></tr>"
    "<tr><td><a href='/wifi'>/wifi</a></td>"
    "<td>Mostra i risultati della scansione WiFi e inserisci la configurazione WiFi (/0wifi noscan)</td></tr>"
    "<tr><td><a href='/wifisave'>/wifisave</a></td>"
    "<td>Salva le informazioni sulla configurazione WiFi e configura il dispositivo. Richiede variabili fornite.</td></tr>"
    "<tr><td><a href='/param'>/param</a></td>"
    "<td>Pagina parametri</td></tr>"
    "<tr><td><a href='/info'>/info</a></td>"
    "<td>Pagina informazioni</td></tr>"
    "<tr><td><a href='/close'>/close</a></td>"
    "<td>Chiudi il popup del captive portal, il portale di configurazione resterà attivo</td></tr>"
    "<tr><td><a href='/exit'>/exit</a></td>"
    "<td>Exit Portale di configurazione, il portale verrà chiuso</td></tr>"
    "<tr><td><a href='/restart'>/restart</a></td>"
    "<td>Riavvia il dispositivo</td></tr>"
    "<tr><td><a href='/erase'>/erase</a></td>"
    "<td>Cancella la configurazione WiFi e riavvia il dispositivo. Il dispositivo non si riconnetterà a una rete fino a quando non verranno immessi nuovi dati di configurazione WiFi.</td></tr>"
    "</table>"
    "<p/>Ulteriori informazioni riguardo WiFiManager su <a href='https://github.com/lbussy/AsyncWiFiManager'>https://github.com/lbussy/AsyncWiFiManager</a>.";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
    "<script>function postAjax(url, data, success) {"
    "    var params = typeof data == 'string' ? data : Object.keys(data).map("
    "            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
    "        ).join('&');"
    "    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
    "    xhr.open('POST', url);"
    "    xhr.onreadystatechange = function() {"
    "        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
    "    };"
    "    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
    "    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
    "    xhr.send(params);"
    "    return xhr;}"
    "postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
    "postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
    "</script>";
#endif

// Info html
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<h3>ESP32</h3><hr><dl>";
const char HTTP_INFO_chiprev[] PROGMEM = "<dt>Revisione del Chip</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Motivo dell'ultimo ripristino</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[] PROGMEM = "<dt>Nome host dell'Access Point</dt><dd>{1}</dd>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<h3>ESP8266</h3><hr><dl>";
const char HTTP_INFO_flashsize[] PROGMEM = "<dt>Dimensioni reali della flash</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_fchipid[] PROGMEM = "<dt>ID del chip flash</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[] PROGMEM = "<dt>Versione base</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[] PROGMEM = "<dt>Versione boot</dt><dd>{1}</dd>";
const char HTTP_INFO_memsketch[] PROGMEM = "<dt>Memoria - Dimensioni dello sketch</dt><dd>Byte Usati / Totali<br/>{1} / {2}";
const char HTTP_INFO_memsmeter[] PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Motivo dell'ultimo ripristino</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[] PROGMEM = "<dt>Memoria - Heap libero</dt><dd>{1} byte disponibili</dd>";
const char HTTP_INFO_wifihead[] PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[] PROGMEM = "<dt>Tempo di attività</dt><dd>{1} Min {2} Sec</dd>";
const char HTTP_INFO_chipid[] PROGMEM = "<dt>ID del chip</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[] PROGMEM = "<dt>Dimensioni della Flash</dt><dd>{1} byte</dd>";
const char HTTP_INFO_sdkver[] PROGMEM = "<dt>Versione SDK</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[] PROGMEM = "<dt>Frequenza CPU</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[] PROGMEM = "<dt>IP dell'Access Point </dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[] PROGMEM = "<dt>MAC dell'Access Point</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[] PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[] PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[] PROGMEM = "<dt>IP della stazione</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[] PROGMEM = "<dt>Gateway della stazione</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[] PROGMEM = "<dt>Subnet della stazione</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[] PROGMEM = "<dt>Server del DNS</dt><dd>{1}</dd>";
const char HTTP_INFO_host[] PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[] PROGMEM = "<dt>MAC della stazione</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[] PROGMEM = "<dt>Connesso</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[] PROGMEM = "<dt>Autoconnesso</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[] PROGMEM = "<dt>Temperatura</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[] PROGMEM = "Si";
const char S_n[] PROGMEM = "No";
const char S_enable[] PROGMEM = "Abilitato";
const char S_disable[] PROGMEM = "Disabilitato";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "Sconosciuto";
const char S_passph[] PROGMEM = "********";
const char S_titlewifisaved[] PROGMEM = "Credenziali salvate";
const char S_titlewifisettings[] PROGMEM = "Impostazioni salvate";
const char S_titlewifi[] PROGMEM = "Configura ESP";
const char S_titleinfo[] PROGMEM = "Informazioni";
const char S_titleparam[] PROGMEM = "Setup";
const char S_titleparamsaved[] PROGMEM = "Setup salvato";
const char S_titleexit[] PROGMEM = "Esci";
const char S_titlereset[] PROGMEM = "Ripristina";
const char S_titleerase[] PROGMEM = "Cancella";
const char S_titleclose[] PROGMEM = "Chiudi";
const char S_options[] PROGMEM = "opzioni";
const char S_nonetworks[] PROGMEM = "Nessuna rete trovata. Aggiorna per eseguire nuovamente la scansione.";
const char S_staticip[] PROGMEM = "IP statico";
const char S_staticgw[] PROGMEM = "Gateway statico";
const char S_staticdns[] PROGMEM = "DNS statico";
const char S_subnet[] PROGMEM = "Subnet";
const char S_exiting[] PROGMEM = "Uscita";
const char S_resetting[] PROGMEM = "Il modulo si ripristinerà in pochi secondi.";
const char S_closing[] PROGMEM = "Puoi chiudere la pagina, il portale continuerà a funzionare";
const char S_error[] PROGMEM = "Si è verificato un errore";
const char S_notfound[] PROGMEM = "File non trovato\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMetodo: ";
const char S_args[] PROGMEM = "\nArgomenti: ";
const char S_parampre[] PROGMEM = "param_";

// debug strings
const char D_HR[] PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char *const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"};

const char R_root[] PROGMEM = "/";
const char R_wifi[] PROGMEM = "/wifi";
const char R_wifinoscan[] PROGMEM = "/0wifi";
const char R_wifisave[] PROGMEM = "/wifisave";
const char R_info[] PROGMEM = "/info";
const char R_param[] PROGMEM = "/param";
const char R_paramsave[] PROGMEM = "/paramsave";
const char R_restart[] PROGMEM = "/restart";
const char R_exit[] PROGMEM = "/exit";
const char R_close[] PROGMEM = "/close";
const char R_erase[] PROGMEM = "/erase";
const char R_status[] PROGMEM = "/status";

// Strings
const char S_ip[] PROGMEM = "ip";
const char S_gw[] PROGMEM = "gw";
const char S_sn[] PROGMEM = "sn";
const char S_dns[] PROGMEM = "dns";

// Softap SSID default prefix
#ifdef ESP8266
const char S_ssidpre[] PROGMEM = "ESP";
#elif defined(ESP32)
const char S_ssidpre[] PROGMEM = "ESP32";
#else
const char S_ssidpre[] PROGMEM = "WM";
#endif

// Tokens
// @todo consolidate and reduce
const char T_ss[] PROGMEM = "{";  // token start sentinel
const char T_es[] PROGMEM = "}";  // token end sentinel
const char T_1[] PROGMEM = "{1}"; // @token 1
const char T_2[] PROGMEM = "{2}"; // @token 2
const char T_v[] PROGMEM = "{v}"; // @token v
const char T_I[] PROGMEM = "{I}"; // @token I
const char T_i[] PROGMEM = "{i}"; // @token i
const char T_n[] PROGMEM = "{n}"; // @token n
const char T_p[] PROGMEM = "{p}"; // @token p
const char T_t[] PROGMEM = "{t}"; // @token t
const char T_l[] PROGMEM = "{l}"; // @token l
const char T_c[] PROGMEM = "{c}"; // @token c
const char T_e[] PROGMEM = "{e}"; // @token e
const char T_q[] PROGMEM = "{q}"; // @token q
const char T_r[] PROGMEM = "{r}"; // @token r
const char T_R[] PROGMEM = "{R}"; // @token R
const char T_h[] PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[] PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[] PROGMEM = "text/html";
const char HTTP_HEAD_CT2[] PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[] PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[] PROGMEM = "*";

const char *const WIFI_STA_STATUS[] PROGMEM{
    "WL_IDLE_STATUS",           // 0 STATION_IDLE
    "WL_NO_SSID_AVAIL",         // 1 STATION_NO_AP_FOUND
    "WL_SCAN_COMPLETED",        // 2
    "WL_CONNECTED",             // 3 STATION_GOT_IP
    "WL_CONNECT_FAILED",        // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
    "WL_CONNECTION_LOST",       // 5
    "WL_DISCONNECTED",          // 6
    "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE
};

#ifdef ESP32
const char *const AUTH_MODE_NAMES[] PROGMEM{
    "OPEN",
    "WEP",
    "WPA_PSK",
    "WPA2_PSK",
    "WPA_WPA2_PSK",
    "WPA2_ENTERPRISE",
    "MAX"};
#elif defined(ESP8266)
const char *const AUTH_MODE_NAMES[] PROGMEM{
    "",
    "",
    "WPA_PSK", // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK", // 4 ENC_TYPE_CCMP
    "WEP",      // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char *const WIFI_MODES[] PROGMEM = {"NULL", "STA", "AP", "STA+AP"};

#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US", 1, 11, CONFIG_ESP32_PHY_MAX_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN", 1, 13, CONFIG_ESP32_PHY_MAX_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP", 1, 14, CONFIG_ESP32_PHY_MAX_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US", 1, 11, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN", 1, 13, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP", 1, 14, WIFI_COUNTRY_POLICY_AUTO};
#endif

#endif