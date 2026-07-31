// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
alignas(logger::Logger) static unsigned char logger__logger_logger_id__pstorage[sizeof(logger::Logger)];
static logger::Logger *const logger_logger_id = reinterpret_cast<logger::Logger *>(logger__logger_logger_id__pstorage);
#ifndef __PICOLIBC__
using std::isnan;
#endif
using std::min;
using std::max;
#include <new>
using namespace number;
using namespace select;
using namespace light;
alignas(web_server_base::WebServerBase) static unsigned char web_server_base__web_server_base_webserverbase_id__pstorage[sizeof(web_server_base::WebServerBase)];
static web_server_base::WebServerBase *const web_server_base_webserverbase_id = reinterpret_cast<web_server_base::WebServerBase *>(web_server_base__web_server_base_webserverbase_id__pstorage);
alignas(captive_portal::CaptivePortal) static unsigned char captive_portal__captive_portal_captiveportal_id__pstorage[sizeof(captive_portal::CaptivePortal)];
static captive_portal::CaptivePortal *const captive_portal_captiveportal_id = reinterpret_cast<captive_portal::CaptivePortal *>(captive_portal__captive_portal_captiveportal_id__pstorage);
alignas(wifi::WiFiComponent) static unsigned char wifi__wifi_wificomponent_id__pstorage[sizeof(wifi::WiFiComponent)];
static wifi::WiFiComponent *const wifi_wificomponent_id = reinterpret_cast<wifi::WiFiComponent *>(wifi__wifi_wificomponent_id__pstorage);
alignas(mdns::MDNSComponent) static unsigned char mdns__mdns_mdnscomponent_id__pstorage[sizeof(mdns::MDNSComponent)];
static mdns::MDNSComponent *const mdns_mdnscomponent_id = reinterpret_cast<mdns::MDNSComponent *>(mdns__mdns_mdnscomponent_id__pstorage);
alignas(network::NetworkComponent) static unsigned char network__network_networkcomponent_id__pstorage[sizeof(network::NetworkComponent)];
static network::NetworkComponent *const network_networkcomponent_id = reinterpret_cast<network::NetworkComponent *>(network__network_networkcomponent_id__pstorage);
alignas(esphome::ESPHomeOTAComponent) static unsigned char esphome__esphome_esphomeotacomponent_id__pstorage[sizeof(esphome::ESPHomeOTAComponent)];
static esphome::ESPHomeOTAComponent *const esphome_esphomeotacomponent_id = reinterpret_cast<esphome::ESPHomeOTAComponent *>(esphome__esphome_esphomeotacomponent_id__pstorage);
alignas(web_server::WebServerOTAComponent) static unsigned char web_server__web_server_webserverotacomponent_id__pstorage[sizeof(web_server::WebServerOTAComponent)];
static web_server::WebServerOTAComponent *const web_server_webserverotacomponent_id = reinterpret_cast<web_server::WebServerOTAComponent *>(web_server__web_server_webserverotacomponent_id__pstorage);
alignas(preferences::IntervalSyncer) static unsigned char preferences__preferences_intervalsyncer_id__pstorage[sizeof(preferences::IntervalSyncer)];
static preferences::IntervalSyncer *const preferences_intervalsyncer_id = reinterpret_cast<preferences::IntervalSyncer *>(preferences__preferences_intervalsyncer_id__pstorage);
alignas(safe_mode::SafeModeComponent) static unsigned char safe_mode__safe_mode_safemodecomponent_id__pstorage[sizeof(safe_mode::SafeModeComponent)];
static safe_mode::SafeModeComponent *const safe_mode_safemodecomponent_id = reinterpret_cast<safe_mode::SafeModeComponent *>(safe_mode__safe_mode_safemodecomponent_id__pstorage);
alignas(api::APIServer) static unsigned char api__api_apiserver_id__pstorage[sizeof(api::APIServer)];
static api::APIServer *const api_apiserver_id = reinterpret_cast<api::APIServer *>(api__api_apiserver_id__pstorage);
using namespace api;
alignas(esp32_ble_tracker::ESP32BLETracker) static unsigned char esp32_ble_tracker__esp32_ble_tracker_esp32bletracker_id__pstorage[sizeof(esp32_ble_tracker::ESP32BLETracker)];
static esp32_ble_tracker::ESP32BLETracker *const esp32_ble_tracker_esp32bletracker_id = reinterpret_cast<esp32_ble_tracker::ESP32BLETracker *>(esp32_ble_tracker__esp32_ble_tracker_esp32bletracker_id__pstorage);
alignas(ble_client::BLEClient) static unsigned char ble_client__hobby_ble__pstorage[sizeof(ble_client::BLEClient)];
static ble_client::BLEClient *const hobby_ble = reinterpret_cast<ble_client::BLEClient *>(ble_client__hobby_ble__pstorage);
alignas(fendt_caravan::FendtCaravan) static unsigned char fendt_caravan__caravan__pstorage[sizeof(fendt_caravan::FendtCaravan)];
static fendt_caravan::FendtCaravan *const caravan = reinterpret_cast<fendt_caravan::FendtCaravan *>(fendt_caravan__caravan__pstorage);
alignas(esp32_ble::ESP32BLE) static unsigned char esp32_ble__esp32_ble_esp32ble_id__pstorage[sizeof(esp32_ble::ESP32BLE)];
static esp32_ble::ESP32BLE *const esp32_ble_esp32ble_id = reinterpret_cast<esp32_ble::ESP32BLE *>(esp32_ble__esp32_ble_esp32ble_id__pstorage);
static constexpr size_t ESPHOME_LOOPING_COMPONENT_COUNT = \
  (1 * HasLoopOverride<logger::Logger>::value) + \
  (1 * HasLoopOverride<captive_portal::CaptivePortal>::value) + \
  (1 * HasLoopOverride<wifi::WiFiComponent>::value) + \
  (1 * HasLoopOverride<mdns::MDNSComponent>::value) + \
  (1 * HasLoopOverride<network::NetworkComponent>::value) + \
  (1 * HasLoopOverride<esphome::ESPHomeOTAComponent>::value) + \
  (1 * HasLoopOverride<preferences::IntervalSyncer>::value) + \
  (1 * HasLoopOverride<safe_mode::SafeModeComponent>::value) + \
  (1 * HasLoopOverride<web_server::WebServerOTAComponent>::value) + \
  (1 * HasLoopOverride<api::APIServer>::value) + \
  (1 * HasLoopOverride<esp32_ble_tracker::ESP32BLETracker>::value) + \
  (1 * HasLoopOverride<ble_client::BLEClient>::value) + \
  (1 * HasLoopOverride<fendt_caravan::FendtCaravan>::value) + \
  (1 * HasLoopOverride<esp32_ble::ESP32BLE>::value);
namespace esphome {
static const char COMP_SRC_TABLE_STR_0[] PROGMEM = "logger";
static const char COMP_SRC_TABLE_STR_1[] PROGMEM = "captive_portal";
static const char COMP_SRC_TABLE_STR_2[] PROGMEM = "wifi";
static const char COMP_SRC_TABLE_STR_3[] PROGMEM = "mdns";
static const char COMP_SRC_TABLE_STR_4[] PROGMEM = "network";
static const char COMP_SRC_TABLE_STR_5[] PROGMEM = "esphome.ota";
static const char COMP_SRC_TABLE_STR_6[] PROGMEM = "preferences";
static const char COMP_SRC_TABLE_STR_7[] PROGMEM = "safe_mode";
static const char COMP_SRC_TABLE_STR_8[] PROGMEM = "web_server.ota";
static const char COMP_SRC_TABLE_STR_9[] PROGMEM = "api";
static const char COMP_SRC_TABLE_STR_10[] PROGMEM = "esp32_ble_tracker";
static const char COMP_SRC_TABLE_STR_11[] PROGMEM = "ble_client";
static const char COMP_SRC_TABLE_STR_12[] PROGMEM = "fendt_caravan";
static const char COMP_SRC_TABLE_STR_13[] PROGMEM = "esp32_ble";
static const char *const COMP_SRC_TABLE[] PROGMEM = {COMP_SRC_TABLE_STR_0, COMP_SRC_TABLE_STR_1, COMP_SRC_TABLE_STR_2, COMP_SRC_TABLE_STR_3, COMP_SRC_TABLE_STR_4, COMP_SRC_TABLE_STR_5, COMP_SRC_TABLE_STR_6, COMP_SRC_TABLE_STR_7, COMP_SRC_TABLE_STR_8, COMP_SRC_TABLE_STR_9, COMP_SRC_TABLE_STR_10, COMP_SRC_TABLE_STR_11, COMP_SRC_TABLE_STR_12, COMP_SRC_TABLE_STR_13};
const LogString *component_source_lookup(uint8_t index) {
  if (index == 0 || index > 14) return LOG_STR("<unknown>");
  return reinterpret_cast<const LogString *>(
    progmem_read_ptr(&COMP_SRC_TABLE[index - 1]));
}
}  // namespace esphome
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // logger:
  //   level: DEBUG
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  //   runtime_tag_levels: false
  new(logger_logger_id) logger::Logger(115200);
  logger_logger_id->create_pthread_key();
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  // network:
  //   id: network_networkcomponent_id
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: hobbyconnect
  //   friendly_name: HobbyConnect
  //   min_version: 2026.7.3
  //   build_path: build/hobbyconnect
  //   platformio_options: {}
  //   build_flags: []
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   merge_warnings: true
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  new (&App) Application();
  App.pre_setup("hobbyconnect", 12, "HobbyConnect", 12);
  App.looping_components_.init(ESPHOME_LOOPING_COMPONENT_COUNT);
  // number:
  // select:
  // light:
  App.register_component_(logger_logger_id, 1);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  new(web_server_base_webserverbase_id) web_server_base::WebServerBase();
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  //   compression: gzip
  new(captive_portal_captiveportal_id) captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  App.register_component_(captive_portal_captiveportal_id, 2);
  // wifi:
  //   ap:
  //     ssid: \033[8mHobbyConnect Fallback\033[28m
  //     password: \033[8mhOkafLsky1JP\033[28m
  //     id: wifi_wifiap_id
  //     ap_timeout: 90s
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect:
  //     enabled: false
  //     storage: flash
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   networks:
  //     - ssid: \033[8mWLANxWW\033[28m
  //       password: \033[8mdbc9e12634e4469dcd1b139900\033[28m
  //       id: wifi_wifiap_id_2
  //       priority: 0
  //   use_address: hobbyconnect.local
  new(wifi_wificomponent_id) wifi::WiFiComponent();
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("WLANxWW");
  wifi_wifiap_id_2.set_password("dbc9e12634e4469dcd1b139900");
  wifi_wifiap_id_2.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("HobbyConnect Fallback");
  wifi_wifiap_id.set_password("hOkafLsky1JP");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(90000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  App.register_component_(wifi_wificomponent_id, 3);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  new(mdns_mdnscomponent_id) mdns::MDNSComponent();
  App.register_component_(mdns_mdnscomponent_id, 4);
  new(network_networkcomponent_id) network::NetworkComponent();
  App.register_component_(network_networkcomponent_id, 5);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: \033[8mchard-breeze-backpack-stitch\033[28m
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  //   allow_partition_access: false
  new(esphome_esphomeotacomponent_id) esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("chard-breeze-backpack-stitch");
  App.register_component_(esphome_esphomeotacomponent_id, 6);
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  new(web_server_webserverotacomponent_id) web_server::WebServerOTAComponent();
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  new(preferences_intervalsyncer_id) preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  App.register_component_(preferences_intervalsyncer_id, 7);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  //   storage: flash
  new(safe_mode_safemodecomponent_id) safe_mode::SafeModeComponent();
  App.register_component_(safe_mode_safemodecomponent_id, 8);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000, true)) return;
  App.register_component_(web_server_webserverotacomponent_id, 9);
  // api:
  //   encryption:
  //     key: \033[8mkBau0u+sqYYIfxFkI1F8ohK1vDxhVGx/aUPe0Dx90xU=\033[28m
  //   id: api_apiserver_id
  //   port: 6053
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 5
  //   max_send_queue: 8
  new(api_apiserver_id) api::APIServer();
  App.register_component_(api_apiserver_id, 10);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_noise_psk({144, 22, 174, 210, 239, 172, 169, 134, 8, 127, 17, 100, 35, 81, 124, 162, 18, 181, 188, 60, 97, 84, 108, 127, 105, 67, 222, 208, 60, 125, 211, 21});
  // esp32:
  //   variant: ESP32
  //   framework:
  //     type: esp-idf
  //     version: 5.5.5
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       sram1_as_iram: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //       enable_ota_downgrade_protection: false
  //       use_full_certificate_bundle: false
  //       include_builtin_idf_components: []
  //       enable_full_printf: false
  //       disable_debug_stubs: true
  //       disable_ocd_aware: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_dev_null_vfs: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_regi2c_in_iram: true
  //       adc_oneshot_in_iram: false
  //       disable_fatfs: true
  //     components: []
  //   flash_size: 4MB
  //   watchdog_timeout: 5s
  //   board: esp32
  //   cpu_frequency: 240MHZ
  // external_components:
  //   - source:
  //       path: /Users/christian/Documents/GitHub/hobbyconnect/components
  //       type: local
  //     components:
  //       - fendt_caravan
  //     refresh: 1d
  // esp32_ble_tracker:
  //   id: esp32_ble_tracker_esp32bletracker_id
  //   ble_id: esp32_ble_esp32ble_id
  //   scan_parameters:
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     active: true
  //     continuous: true
  //   software_coexistence: true
  new(esp32_ble_tracker_esp32bletracker_id) esp32_ble_tracker::ESP32BLETracker();
  App.register_component_(esp32_ble_tracker_esp32bletracker_id, 11);
  // ble_client:
  //   mac_address: DE:00:44:80:60:49
  //   id: hobby_ble
  //   auto_connect: true
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  new(hobby_ble) ble_client::BLEClient();
  App.register_component_(hobby_ble, 12);
  esp32_ble_tracker_esp32bletracker_id->register_client(hobby_ble);
  hobby_ble->set_address(0xDE0044806049ULL);
  hobby_ble->set_auto_connect(true);
  // fendt_caravan:
  //   id: caravan
  //   ble_client_id: hobby_ble
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  new(caravan) fendt_caravan::FendtCaravan();
  App.register_component_(caravan, 13);
  hobby_ble->register_ble_node(caravan);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising: false
  //   advertising_cycle_time: 10s
  //   disable_bt_logs: true
  //   connection_timeout: 20s
  //   max_notifications: 12
  //   max_connections: 3
  new(esp32_ble_esp32ble_id) esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  App.register_component_(esp32_ble_esp32ble_id, 14);
  // web_server_idf:
  //   {}
  { auto *h = esp32_ble_tracker_esp32bletracker_id; esp32_ble_esp32ble_id->add_gap_event_callback([h](esp_gap_ble_cb_event_t event, esp_ble_gap_cb_param_t *param) { h->gap_event_handler(event, param); }); }
  { auto *h = esp32_ble_tracker_esp32bletracker_id; esp32_ble_esp32ble_id->add_gap_scan_event_callback([h](const esphome::esp32_ble::BLEScanResult &scan_result) { h->gap_scan_event_handler(scan_result); }); }
  { auto *h = esp32_ble_tracker_esp32bletracker_id; esp32_ble_esp32ble_id->add_gattc_event_callback([h](esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if, esp_ble_gattc_cb_param_t *param) { h->gattc_event_handler(event, gattc_if, param); }); }
  { auto *h = esp32_ble_tracker_esp32bletracker_id; esp32_ble_esp32ble_id->add_ble_status_event_callback([h]() { h->ble_before_disabled_event_handler(); }); }
  esp32_ble_tracker_esp32bletracker_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_tracker_esp32bletracker_id->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker_id->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker_id->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker_id->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker_id->set_scan_continuous(true);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
