
//! \file RzChromaSDKTypes.h
//! \brief \~english Data types.
//! \brief \~chinese 数据类型。
//! \brief \~japanese データタイプ。
//! \brief \~korean 데이터 타입.
//! \brief \~polish Typy danych.
//! \brief \~russian Типы данных.

#ifndef _RZCHROMASDKTYPES_H_
#define _RZCHROMASDKTYPES_H_

#pragma once

typedef LONG            RZRESULT;           //!< \~english Return result. \~chinese 返回结果。 \~japanese 結果のリターン。 \~korean 결과 반환. \~polish Zwracany wynik. \~russian Возвращаемый результат.
typedef GUID            RZEFFECTID;         //!< \~english Effect identifier. \~chinese 効果 ID。 \~korean 효과 식별자. \~polish Identyfikator efektu. \~russian Идентификатор эффекта. \~chinese 效果标识符。
typedef GUID            RZDEVICEID;         //!< \~english Device identifier. \~japanese デバイス ID。 \~korean 장치 식별자. \~polish Identyfikator urządzenia. \~russian Идентификатор устройства. \~chinese 设备标识符。
typedef unsigned int    RZDURATION;         //!< \~english Time in milliseconds. \~japanese 時間 (ミリ秒)。 \~korean 시간(밀리초). \~polish Czas w milisekundach. \~russian Время в миллисекундах. \~chinese 时间（毫秒）。
typedef size_t          RZSIZE;             //!< \~english Size. \~japanese サイズ。 \~korean 크기. \~polish Rozmiar. \~russian Размер. \~chinese 大小。
typedef void*           PRZPARAM;           //!< \~english Generic data structure pointer. \~japanese 一般データ構造ポインター。 \~korean 일반 데이터 구조체 포인터. \~polish ROgólny wskaźnik struktury danych. \~russian Указатель универсальной структуры данных. \~chinese 通用数据结构指针。
typedef DWORD           RZID;               //!< \~english Generic data type for Identifier. \~japanese 識別子用一般データタイプ。 \~korean 식별자를 위한 일반 데이터 타입. \~polish Ogólny typ danych identyfikatora. \~russian Универсальный тип данных для идентификатора. \~chinese 标识符的通用数据类型。
typedef DWORD           RZCOLOR;            //!< \~english Color data. 1st byte = Red; 2nd byte = Green; 3rd byte = Blue; 4th byte = Alpha (if applicable). \~japanese カラーデータ。第 1 バイト = 赤、第 2 バイト = 緑、第 3 バイト = 青、第 4 バイト = アルファ (該当する場合)。 \~korean 색상 데이터. 1st byte = 적색; 2nd byte = 녹색; 3rd byte = 파란색; 4th byte = 알파 (적용 가능한 경우) \~polish Dane kolorów. 1. bajt = czerwony, 2. bajt = zielony, 3. bajt = niebieski, 4. bajt = alfa (jeśli ma zastosowanie). \~russian Данные цвета. 1-й байт = красный; 2-й байт = зеленый; 3-й байт = синий; 4-й байт = альфа-канал (если применимо). \~chinese 颜色数据。第 1 字节 = 红色；第 2 字节 = 绿色；第 3 字节 = 蓝色；第 4 字节 = Alpha（若适用）。


namespace ChromaSDK
{
    //! \~english Event notification Window message. \~japanese イベント通知ウィンドウメッセージ。 \~korean 이벤트 알림 창 메시지. \~polish Komunikat w oknie powiadomienia o zdarzeniu. \~russian Сообщение окна с уведомлением о событии. \~chinese 事件通知窗口消息。
    const UINT WM_CHROMA_EVENT = WM_APP + 0x2000;

    //! \~english Application information. \~japanese アプリケーション情報。 \~korean 응용 프로그램 정보. \~polish Informacje dotyczące aplikacji. \~russian Информация о приложении. \~chinese 应用信息。
    typedef struct APPINFOTYPE
    {
        TCHAR Title[256];           //!< \~english Title of the application. \~japanese アプリケーションのタイトル。 \~korean 응용 프로그램 제목. \~polish Tytuł aplikacji. \~russian Заголовок приложения. \~chinese 应用程序标题。
        TCHAR Description[1024];    //!< \~english A short description of the application. \~japanese アプリケーションの簡単な説明。 \~korean 응용 프로그램에 대한 간단한 설명. \~polish Krótki opis aplikacji. \~russian Краткое описание приложения. \~chinese 应用程序简要说明。
        //! \~english Author information. \~japanese 作成者情報。 \~korean 프로그래머 정보. \~polish Informacje o autorze. \~russian Информация об авторе. \~chinese 作者信息。
        struct Author
        {
            TCHAR Name[256];        //!< \~english Name of the developer/company. \~japanese デベロッパー/会社の名前。 \~korean 개발자/회사 이름. \~polish Imię i nazwisko/nazwa dewelopera/firmy. \~russian Имя разработчика/компании. \~chinese 开发者/公司名称。
            TCHAR Contact[256];     //!< \~english Contact information. \~japanese 連絡先情報。 \~korean 연락처 정보. \~polish Dane kontaktowe. \~russian Контактная информация. \~chinese 联系信息。
        } Author;
        DWORD SupportedDevice;		//!< \~ Keyboard = 0x01, Mouse = 0x02, Headset = 0x04, Mousepad = 0x08, Keypad = 0x10, ChromaLink = 0x20
        DWORD Category;             //!< \~english 1 = Utility. (To specifiy this is an utility application); 2 = Game. (To specifiy this is a game); \~japanese 1 = ユーティリティ。(ユーティリティ アプリケーションであることを指定するため); 2 = ゲーム。(ゲームであることを指定するため) \~korean 1 = 유틸리티. (유틸리티 응용 프로그램으로 지정); 2 = 게임. (게임으로 지정) \~polish 1 = Program narzędziowy. (Wskazanie, że jest to program narzędziowy); 2 = Gra. (Wskazanie, że jest to gra) \~russian 1 = Служебное. (Чтобы указать, что это служебное приложение.); 2 = Игра. (Чтобы указать, что это игра.) \~chinese 1 = 实用工具。（指定这是一个实用工具应用程序）; 2 = 游戏。（指定这是一个游戏）
    } APPINFOTYPE;

    //! \~english Chroma generic effects. Note: Not all devices supported the listed effects. \~japanese Chroma の一般効果。注：リストにある効果をサポートしていないデバイスもあります。 \~korean Chroma 일반 효과. 참고: 모든 장치가 열거된 효과를 지원하는 것은 아닙니다. \~polish Efekty własne Chroma. Uwaga: Nie wszystkie urządzenia obsługują wymienione efekty. \~russian Универсальные эффекты Chroma. Примечание. Не все устройства поддерживали перечисленные эффекты. \~chinese Chroma 幻彩通用效果。注意：并非所有设备都支持所列效果。
    typedef enum EFFECT_TYPE
    {
        CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
        CHROMA_WAVE,                // Wave effect (Deprecated and should not be used).
        CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
        CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
        CHROMA_BLINKING,            // Blinking effect (Deprecated and should not be used).
        CHROMA_REACTIVE,            // Reactive effect (Deprecated and should not be used).
        CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
        CHROMA_CUSTOM,              //!< \~english Custom effect. For mice, please see Mouse::CHROMA_CUSTOM2. \~japanese カスタム効果。マウスについては「Mouse::CHROMA_CUSTOM2」を参照してください。 \~korean 사용자 지정 효과. 마우스에 대해서는 Mouse::CHROMA_CUSTOM2를 참고하십시오. \~polish Efekt niestandardowy. W przypadku myszy patrz Mouse::CHROMA_CUSTOM2. \~russian Пользовательский эффект. Для мышей см. Mouse::CHROMA_CUSTOM2. \~chinese 自定义效果。对于鼠标，请参阅“Mouse::CHROMA_CUSTOM2”。
        CHROMA_CUSTOM2,             //!< \~english Reserved, do not use. \~japanese 予約済み、使用しないでください。 \~korean 예약됨, 사용하지 말 것. \~polish Zarezerwowane, nie używać. \~russian Зарезервировано, не использовать. \~chinese 保留，请勿使用。
        CHROMA_RESERVED,            //!< \~english Reserved, do not use. \~japanese 予約済み、使用しないでください。 \~korean 예약됨, 사용하지 말 것. \~polish Zarezerwowane, nie używać. \~russian Зарезервировано, не использовать. \~chinese 保留，请勿使用。
        CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
    } EFFECT_TYPE;

    //! \~english Device information. \~japanese デバイス情報。 \~korean 장치 정보. \~polish Informacje dotyczące urządzeń. \~russian Информация об устройстве. \~chinese 设备信息。
    typedef struct DEVICE_INFO_TYPE
    {
        //! \~english Device types. \~japanese デバイスタイプ。 \~korean 장치 타입. \~polish Rodzaje urządzeń. \~russian Типы устройств. \~chinese 设备类型。
        enum DeviceType
        {
            DEVICE_KEYBOARD = 1, //!< \~english Keyboard device. \~japanese キーボードデバイス。 \~korean 키보드 장치. \~polish Urządzenie typu klawiatura. \~russian Клавиатура. \~chinese 键盘设备。
            DEVICE_MOUSE = 2, //!< \~english Mouse device. \~japanese マウスデバイス。 \~korean 마우스 장치. \~polish Urządzenie typu mysz. \~russian Мышь. \~chinese 鼠标设备。
            DEVICE_HEADSET = 3, //!< \~english Headset device. \~japanese ヘッドセットデバイス。 \~korean 헤드셋 장치. \~polish Urządzenie typu zestaw słuchawkowy. \~russian Гарнитура. \~chinese 耳麦设备。
            DEVICE_MOUSEPAD = 4, //!< \~english Mousepad device. \~japanese マウスパッドデバイス。 \~korean 마우스 패드 장치. \~polish Urządzenie typu mousepad. \~russian Коврик для мыши. \~chinese 鼠标垫设备。
            DEVICE_KEYPAD = 5, //!< \~english Keypad device. \~japanese キーパッドデバイス。 \~korean 키패드 장치. \~polish Urządzenie typu keypad. \~russian Клавишный блок. \~chinese 小键盘设备。
            DEVICE_SYSTEM = 6, //!< \~english System device.
            DEVICE_SPEAKERS = 7, //!< \~english Speakers.
            DEVICE_INVALID          //!< \~english Invalid device. \~japanese 無効なデバイス。 \~korean 유효하지 않은 장치. \~polish Nieprawidłowe urządzenie. \~russian Недопустимое устройство. \~chinese 无效设备。
        } DeviceType;

        DWORD Connected;            //!< \~english Number of devices connected. \~japanese 接続されたデバイスの数。 \~korean 연결된 장치 수. \~polish Liczba podłączonych urządzeń. \~russian Число подключенных устройств. \~chinese 已连接设备的数量。
    } DEVICE_INFO_TYPE;

    const RZSIZE MAX_ROW = 30;      //!< \~english Maximum rows for custom effects. \~japanese カスタム効果の最大行。 \~korean 사용자 지정 효과를 위한 최대 행. \~polish Maksymalna liczba wierszy na efekty niestandardowe. \~russian Максимальное число строк для пользовательских эффектов. \~chinese 自定义效果的最大行数。
    const RZSIZE MAX_COLUMN = 30;   //!< \~english Maximum columns for custom effects. \~japanese カスタム効果の最大列。 \~korean 사용자 지정 효과를 위한 최대 열. \~polish Maksymalna liczba kolumn na efekty niestandardowe. \~russian Максимальное число столбцов для пользовательских эффектов. \~chinese 自定义效果的最大列数。

    typedef struct EFFECT_HEADER_TYPE
    {
        RZSIZE Size;
        DWORD Param;
    } EFFECT_HEADER_TYPE, *PEFFECT_HEADER_TYPE;

    typedef struct EFFECT_DATA_TYPE
    {
        EFFECT_HEADER_TYPE Header;
        PRZPARAM pData;
    } EFFECT_DATA_TYPE, *PEFFECT_DATA_TYPE;

    // Blinking effect (Deprecated and should not be used).
    typedef struct BLINKING_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of the structure. Size = sizeof(BLINKING_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.

        RZCOLOR Color;     // Blinking color
    } BLINKING_EFFECT_TYPE;

    // Breathing effect (Deprecated and should not be used).
    typedef struct BREATHING_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of ths structure. Size = sizeof(BREATHING_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.

        // Breathing effect types.
        enum _Type
        {
            ONE_COLOR = 1,  // 1 color (Only fill Color1).
            TWO_COLORS,     // 2 colors.
            RANDOM_COLORS   // Random colors
        } Type;

        RZCOLOR Color1;    // First color.
        RZCOLOR Color2;    // Second color.
    } BREATHING_EFFECT_TYPE;

    //! \~english Custom effect. \~chinese 自定义效果。
    typedef struct CUSTOM_EFFECT_TYPE
    {
        RZSIZE Size;        //!< \~english Size of the structure. Size = sizeof(CUSTOM_EFFECT_TYPE)
        DWORD Param;        //!< \~english Extra parameters.

        RZCOLOR Color[MAX_ROW][MAX_COLUMN]; //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
    } CUSTOM_EFFECT_TYPE;

    //! \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
    typedef struct NO_EFFECT_TYPE
    {
        RZSIZE Size;        //!< \~english Size of the structure. Size = sizeof(NO_EFFECT_TYPE) \~chinese 数据结构的大小
        DWORD Param;        //!< \~english Extra parameters. \~chinese 额外参数
    } NO_EFFECT_TYPE;

    // Reactive effect (Deprecated and should not be used).
    typedef struct REACTIVE_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of the structure. Size = sizeof(REACTIVE_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.

        // Duration of the effect.
        enum _Duration
        {
            DURATION_SHORT = 1, // Short duration.
            DURATION_MEDIUM,    // Medium duration.
            DURATION_LONG       // Long duration.
        } Duration;             // The time taken for the effect to fade away.

        RZCOLOR Color;         // Color of the effect.
    } REACTIVE_EFFECT_TYPE;

    // Spectrum cycling effect (Deprecated and should not be used).
    typedef struct SPECTRUMCYCLING_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of the structure. Size = sizeof(SPECTRUMCYCLING_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.
    } SPECTRUMCYCLING_EFFECT_TYPE;

    // Starlight effect (Deprecated and should not be used).
    typedef struct STARLIGHT_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of the structure. Size = sizeof(SPECTRUMCYCLING_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.

        // Starlight effect types.
        enum _Type
        {
            TWO_COLORS = 1, // 2 colors.
            RANDOM_COLORS   // Random colors
        } Type;

        RZCOLOR Color1;    // First color.
        RZCOLOR Color2;    // Second color.

        // Duration of the effect.
        enum _Duration
        {
            DURATION_SHORT = 1, // Short duration.
            DURATION_MEDIUM,    // Medium duration.
            DURATION_LONG       // Long duration.
        } Duration;             // The time taken for the effect to fade away.

    } STARLIGHT_EFFECT_TYPE;

    //! \~english Static effect. \~japanese スタティック効果。 \~korean 스태틱 효과. \~polish Efekt statyczny. \~russian Статический эффект. \~chinese 静态效果。
    typedef struct STATIC_EFFECT_TYPE
    {
        RZSIZE Size;        //!< \~english Size of the structure. Size = sizeof(STATIC_EFFECT_TYPE)
        DWORD Param;        //!< \~english Extra parameters.

        RZCOLOR Color;     //!< \~english Color of the effect.
    } STATIC_EFFECT_TYPE;

    // Wave effect (Deprecated and should not be used).
    typedef struct WAVE_EFFECT_TYPE
    {
        RZSIZE Size;        // Size of the structure. Size = sizeof(WAVE_EFFECT_TYPE)
        DWORD Param;        // Extra parameters.

        // Direction of effect.
        enum _Direction
        {
            DIRECTION_LEFT_TO_RIGHT = 1,    // Left to right.
            DIRECTION_RIGHT_TO_LEFT,        // Right to left.
            DIRECTION_FRONT_TO_BACK,        // Front to back
            DIRECTION_BACK_TO_FRONT         // Back top front
        } Direction;
    } WAVE_EFFECT_TYPE;

    //! \~english Keyboards. \~japanese キーボード。 \~korean 키보드. \~polish Klawiatury. \~russian Клавиатуры. \~chinese 键盘。
    namespace Keyboard
    {
        //! \~english Definitions of (keyboard) keys. \~japanese (キーボード) キーの定義。 \~korean (키보드) 키에 대한 정의. \~polish Definicje klawiszy (klawiatury). \~russian Определения клавиш (клавиатура). \~chinese （键盘）按键定义。
        typedef enum RZKEY
        {
            RZKEY_ESC = 0x0001,                 //!< \~ Esc (VK_ESCAPE)
            RZKEY_F1 = 0x0003,                  //!< \~ F1 (VK_F1) 
            RZKEY_F2 = 0x0004,                  //!< \~ F2 (VK_F2) 
            RZKEY_F3 = 0x0005,                  //!< \~ F3 (VK_F3) 
            RZKEY_F4 = 0x0006,                  //!< \~ F4 (VK_F4) 
            RZKEY_F5 = 0x0007,                  //!< \~ F5 (VK_F5) 
            RZKEY_F6 = 0x0008,                  //!< \~ F6 (VK_F6) 
            RZKEY_F7 = 0x0009,                  //!< \~ F7 (VK_F7) 
            RZKEY_F8 = 0x000A,                  //!< \~ F8 (VK_F8) 
            RZKEY_F9 = 0x000B,                  //!< \~ F9 (VK_F9) 
            RZKEY_F10 = 0x000C,                 //!< \~ F10 (VK_F10) 
            RZKEY_F11 = 0x000D,                 //!< \~ F11 (VK_F11) 
            RZKEY_F12 = 0x000E,                 //!< \~ F12 (VK_F12) 
            RZKEY_1 = 0x0102,                   //!< \~ 1 (VK_1) 
            RZKEY_2 = 0x0103,                   //!< \~ 2 (VK_2) 
            RZKEY_3 = 0x0104,                   //!< \~ 3 (VK_3) 
            RZKEY_4 = 0x0105,                   //!< \~ 4 (VK_4) 
            RZKEY_5 = 0x0106,                   //!< \~ 5 (VK_5) 
            RZKEY_6 = 0x0107,                   //!< \~ 6 (VK_6) 
            RZKEY_7 = 0x0108,                   //!< \~ 7 (VK_7) 
            RZKEY_8 = 0x0109,                   //!< \~ 8 (VK_8) 
            RZKEY_9 = 0x010A,                   //!< \~ 9 (VK_9) 
            RZKEY_0 = 0x010B,                   //!< \~ 0 (VK_0) 
            RZKEY_A = 0x0302,                   //!< \~ A (VK_A) 
            RZKEY_B = 0x0407,                   //!< \~ B (VK_B) 
            RZKEY_C = 0x0405,                   //!< \~ C (VK_C) 
            RZKEY_D = 0x0304,                   //!< \~ D (VK_D) 
            RZKEY_E = 0x0204,                   //!< \~ E (VK_E) 
            RZKEY_F = 0x0305,                   //!< \~ F (VK_F) 
            RZKEY_G = 0x0306,                   //!< \~ G (VK_G) 
            RZKEY_H = 0x0307,                   //!< \~ H (VK_H) 
            RZKEY_I = 0x0209,                   //!< \~ I (VK_I) 
            RZKEY_J = 0x0308,                   //!< \~ J (VK_J) 
            RZKEY_K = 0x0309,                   //!< \~ K (VK_K) 
            RZKEY_L = 0x030A,                   //!< \~ L (VK_L) 
            RZKEY_M = 0x0409,                   //!< \~ M (VK_M) 
            RZKEY_N = 0x0408,                   //!< \~ N (VK_N) 
            RZKEY_O = 0x020A,                   //!< \~ O (VK_O) 
            RZKEY_P = 0x020B,                   //!< \~ P (VK_P) 
            RZKEY_Q = 0x0202,                   //!< \~ Q (VK_Q) 
            RZKEY_R = 0x0205,                   //!< \~ R (VK_R) 
            RZKEY_S = 0x0303,                   //!< \~ S (VK_S) 
            RZKEY_T = 0x0206,                   //!< \~ T (VK_T) 
            RZKEY_U = 0x0208,                   //!< \~ U (VK_U) 
            RZKEY_V = 0x0406,                   //!< \~ V (VK_V) 
            RZKEY_W = 0x0203,                   //!< \~ W (VK_W) 
            RZKEY_X = 0x0404,                   //!< \~ X (VK_X) 
            RZKEY_Y = 0x0207,                   //!< \~ Y (VK_Y) 
            RZKEY_Z = 0x0403,                   //!< \~ Z (VK_Z) 
            RZKEY_NUMLOCK = 0x0112,             //!< \~ Numlock (VK_NUMLOCK) 
            RZKEY_NUMPAD0 = 0x0513,             //!< \~ Numpad 0 (VK_NUMPAD0) 
            RZKEY_NUMPAD1 = 0x0412,             //!< \~ Numpad 1 (VK_NUMPAD1) 
            RZKEY_NUMPAD2 = 0x0413,             //!< \~ Numpad 2 (VK_NUMPAD2) 
            RZKEY_NUMPAD3 = 0x0414,             //!< \~ Numpad 3 (VK_NUMPAD3) 
            RZKEY_NUMPAD4 = 0x0312,             //!< \~ Numpad 4 (VK_NUMPAD4) 
            RZKEY_NUMPAD5 = 0x0313,             //!< \~ Numpad 5 (VK_NUMPAD5) 
            RZKEY_NUMPAD6 = 0x0314,             //!< \~ Numpad 6 (VK_NUMPAD6) 
            RZKEY_NUMPAD7 = 0x0212,             //!< \~ Numpad 7 (VK_NUMPAD7) 
            RZKEY_NUMPAD8 = 0x0213,             //!< \~ Numpad 8 (VK_NUMPAD8) 
            RZKEY_NUMPAD9 = 0x0214,             //!< \~ Numpad 9 (VK_ NUMPAD9
            RZKEY_NUMPAD_DIVIDE = 0x0113,       //!< \~ Divide (VK_DIVIDE) 
            RZKEY_NUMPAD_MULTIPLY = 0x0114,     //!< \~ Multiply (VK_MULTIPLY) 
            RZKEY_NUMPAD_SUBTRACT = 0x0115,     //!< \~ Subtract (VK_SUBTRACT) 
            RZKEY_NUMPAD_ADD = 0x0215,          //!< \~ Add (VK_ADD) 
            RZKEY_NUMPAD_ENTER = 0x0415,        //!< \~ Enter (VK_RETURN - Extended) 
            RZKEY_NUMPAD_DECIMAL = 0x0514,      //!< \~ Decimal (VK_DECIMAL) 
            RZKEY_PRINTSCREEN = 0x000F,         //!< \~ Print Screen (VK_PRINT) 
            RZKEY_SCROLL = 0x0010,              //!< \~ Scroll Lock (VK_SCROLL) 
            RZKEY_PAUSE = 0x0011,               //!< \~ Pause (VK_PAUSE) 
            RZKEY_INSERT = 0x010F,              //!< \~ Insert (VK_INSERT) 
            RZKEY_HOME = 0x0110,                //!< \~ Home (VK_HOME) 
            RZKEY_PAGEUP = 0x0111,              //!< \~ Page Up (VK_PRIOR) 
            RZKEY_DELETE = 0x020f,              //!< \~ Delete (VK_DELETE) 
            RZKEY_END = 0x0210,                 //!< \~ End (VK_END) 
            RZKEY_PAGEDOWN = 0x0211,            //!< \~ Page Down (VK_NEXT) 
            RZKEY_UP = 0x0410,                  //!< \~ Up (VK_UP) 
            RZKEY_LEFT = 0x050F,                //!< \~ Left (VK_LEFT) 
            RZKEY_DOWN = 0x0510,                //!< \~ Down (VK_DOWN) 
            RZKEY_RIGHT = 0x0511,               //!< \~ Right (VK_RIGHT) 
            RZKEY_TAB = 0x0201,                 //!< \~ Tab (VK_TAB) 
            RZKEY_CAPSLOCK = 0x0301,            //!< \~ Caps Lock(VK_CAPITAL) 
            RZKEY_BACKSPACE = 0x010E,           //!< \~ Backspace (VK_BACK) 
            RZKEY_ENTER = 0x030E,               //!< \~ Enter (VK_RETURN) 
            RZKEY_LCTRL = 0x0501,               //!< \~ Left Control(VK_LCONTROL) 
            RZKEY_LWIN = 0x0502,                //!< \~ Left Window (VK_LWIN) 
            RZKEY_LALT = 0x0503,                //!< \~ Left Alt (VK_LMENU) 
            RZKEY_SPACE = 0x0507,               //!< \~ Spacebar (VK_SPACE) 
            RZKEY_RALT = 0x050B,                //!< \~ Right Alt (VK_RMENU) 
            RZKEY_FN = 0x050C,                  //!< \~ Function key. 
            RZKEY_RMENU = 0x050D,               //!< \~ Right Menu (VK_APPS) 
            RZKEY_RCTRL = 0x050E,               //!< \~ Right Control (VK_RCONTROL) 
            RZKEY_LSHIFT = 0x0401,              //!< \~ Left Shift (VK_LSHIFT) 
            RZKEY_RSHIFT = 0x040E,              //!< \~ Right Shift (VK_RSHIFT) 
            RZKEY_MACRO1 = 0x0100,              //!< \~ Macro Key 1 
            RZKEY_MACRO2 = 0x0200,              //!< \~ Macro Key 2 
            RZKEY_MACRO3 = 0x0300,              //!< \~ Macro Key 3 
            RZKEY_MACRO4 = 0x0400,              //!< \~ Macro Key 4 
            RZKEY_MACRO5 = 0x0500,              //!< \~ Macro Key 5 
            RZKEY_OEM_1 = 0x0101,               //!< \~ ~ (tilde/半角/全角) (VK_OEM_3) 
            RZKEY_OEM_2 = 0x010C,               //!< \~ -- (minus) (VK_OEM_MINUS) 
            RZKEY_OEM_3 = 0x010D,               //!< \~ = (equal) (VK_OEM_PLUS) 
            RZKEY_OEM_4 = 0x020C,               //!< \~ [ (left sqaure bracket) (VK_OEM_4) 
            RZKEY_OEM_5 = 0x020D,               //!< \~ ] (right square bracket) (VK_OEM_6) 
            RZKEY_OEM_6 = 0x020E,               //!< \~ \ (backslash) (VK_OEM_5) 
            RZKEY_OEM_7 = 0x030B,               //!< \~ ; (semi-colon) (VK_OEM_1) 
            RZKEY_OEM_8 = 0x030C,               //!< \~ ' (apostrophe) (VK_OEM_7) 
            RZKEY_OEM_9 = 0x040A,               //!< \~ , (comma) (VK_OEM_COMMA) 
            RZKEY_OEM_10 = 0x040B,              //!< \~ . (period) (VK_OEM_PERIOD) 
            RZKEY_OEM_11 = 0x040C,              //!< \~ / (forward slash) (VK_OEM_2) 
            RZKEY_EUR_1 = 0x030D,               //!< \~ "#" (VK_OEM_5) 
            RZKEY_EUR_2 = 0x0402,               //!< \~ \ (VK_OEM_102) 
            RZKEY_JPN_1 = 0x0015,               //!< \~ ¥ (0xFF) 
            RZKEY_JPN_2 = 0x040D,               //!< \~ \ (0xC1) 
            RZKEY_JPN_3 = 0x0504,               //!< \~ 無変換 (VK_OEM_PA1) 
            RZKEY_JPN_4 = 0x0509,               //!< \~ 変換 (0xFF) 
            RZKEY_JPN_5 = 0x050A,               //!< \~ ひらがな/カタカナ (0xFF) 
            RZKEY_KOR_1 = 0x0015,               //!< \~ | (0xFF) 
            RZKEY_KOR_2 = 0x030D,               //!< \~ (VK_OEM_5) 
            RZKEY_KOR_3 = 0x0402,               //!< \~ (VK_OEM_102) 
            RZKEY_KOR_4 = 0x040D,               //!< \~ (0xC1) 
            RZKEY_KOR_5 = 0x0504,               //!< \~ (VK_OEM_PA1) 
            RZKEY_KOR_6 = 0x0509,               //!< \~ 한/영 (0xFF) 
            RZKEY_KOR_7 = 0x050A,               //!< \~ (0xFF) 
            RZKEY_INVALID = 0xFFFF              //!< \~ Invalid keys. 
        } RZKEY;

        //! \~english Definition of (keyboard) LEDs. \~japanese (キーボード) LED の定義。 \~korean (키보드) LED에 대한 정의. \~polish Definicje diod LED (klawiatury). \~russian Определения светодиодов (клавиатура). \~chinese （键盘）LED 指示灯定义。
        typedef enum RZLED
        {
            RZLED_LOGO = 0x0014                 //!< \~english Razer logo 
        } RZLED;

        //! \~english Maximum number of rows on a keyboard. \~japanese キーボードの最大行数。 \~korean 키보드에서 행의 최대 개수. \~polish Maksymalna liczba wierszy na klawiaturze. \~russian Максимальное число строк клавиатуры. \~chinese 键盘中的最大行数。
        const RZSIZE MAX_ROW = 6;

        //! \~english Maximum number of columns on a keyboard.  \~japanese キーボードの最大列数。  \~korean 키보드에서 열의 최대 개수.  \~polish Maksymalna liczba kolumn na klawiaturze.  \~russian Максимальное число столбцов клавиатуры.  \~chinese 键盘中的最大列数。 
        const RZSIZE MAX_COLUMN = 22;

        //! \~english Maximum number of keys. \~japanese キーの最大数。 \~korean 키의 최대 개수. \~polish Maksymalna liczba klawiszy. \~russian Максимальное число клавиш. \~chinese 按键的最大数量。
        const RZSIZE MAX_KEYS = MAX_ROW * MAX_COLUMN;

        //! \~english Maximum number of custom effects. \~japanese カスタム効果の最大数。 \~korean 사용자 지정 효과의 최대 개수. \~polish Maksymalna liczba efektów niestandardowych. \~russian Максимальное число пользовательских эффектов. \~chinese 自定义效果的最大数量。
        const RZSIZE MAX_CUSTOM_EFFECTS = MAX_KEYS;

        //! \~english Keyboard LED layout. \~japanese キーボード LED レイアウト。 \~korean 키보드 LED 레이아웃. \~polish Układ diod LED klawiatury. \~russian Компоновка светодиодов клавиатуры. \~chinese 键盘 LED 指示灯布局。
        const RZCOLOR RZKEY_LAYOUT[MAX_ROW][MAX_COLUMN] = {};

        //! \~english Chroma keyboard effect types. \~japanese Chroma キーボード効果タイプ。 \~korean Chroma 키보드 효과 타입. \~polish Rodzaje efektów klawiatury Chroma. \~russian Типы эффектов клавиатуры Chroma. \~chinese Chroma 幻彩键盘效果类型。
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
            CHROMA_CUSTOM,              //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_REACTIVE,            // Reactive effect (Deprecated and should not be used).
            CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
            CHROMA_WAVE,                // Wave effect (Deprecated and should not be used).
            CHROMA_RESERVED,            //!< \~english Reserved, do not use. \~japanese 予約済み、使用しないでください。 \~korean 예약됨, 사용하지 말 것. \~polish Zarezerwowane, nie używać. \~russian Зарезервировано, не использовать. \~chinese 保留，请勿使用。
            CHROMA_CUSTOM_KEY,          //!< \~english Custom effects with keys. \~japanese キーによるカスタム効果。 \~korean 키 사용자 지정 효과. \~polish Efekty niestandardowe z użyciem klawiszy. \~russian Пользовательские эффекты с клавишами. \~chinese 按键的自定义效果。
            CHROMA_CUSTOM2,             //!< \~english Custom effects with keys using 8x24 grid. \~japanese 8x24 グリッドを使用したキーによるカスタム効果。 \~korean 8X24 그리드를 사용한 키 사용자 지정 효과. \~polish Efekty niestandardowe z użyciem klawiszy i z zastosowaniem siatki 8x24. \~russian Пользовательские эффекты с клавишами при использовании сетки 8x24. \~chinese 使用 8x24 网格布局的按键自定义效果。
            CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        // Chroma keyboard effects
        // Breathing effect (Deprecated and should not be used).
        typedef struct BREATHING_EFFECT_TYPE
        {
            // Breathing effects.
            enum Type
            {
                TWO_COLORS = 1,     // 2 colors
                RANDOM_COLORS,      // Random colors
                INVALID             // Invalid type
            } Type;
            RZCOLOR Color1;        // First color.
            RZCOLOR Color2;        // Second color.
        } BREATHING_EFFECT_TYPE;

        //! \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_ROW][MAX_COLUMN];      //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } CUSTOM_EFFECT_TYPE;

        //! \~english Custom effect with keys. \~japanese キーによるカスタム効果。 \~korean 키 사용자 지정 효과. \~polish Efekt niestandardowy z użyciem klawiszy. \~russian Пользовательский эффект с клавишами. \~chinese 按键的自定义效果。
        typedef struct CUSTOM_KEY_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_ROW][MAX_COLUMN];        //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
            RZCOLOR Key[MAX_ROW][MAX_COLUMN];          //!< \~english Keyboard keys. \~japanese キーボードキー。 \~korean 키보드 키. \~polish Klawisze klawiatury. \~russian Клавиши клавиатуры. \~chinese 键盘按键。
        } CUSTOM_KEY_EFFECT_TYPE;

        // Reactive effect (Deprecated and should not be used).
        typedef struct REACTIVE_EFFECT_TYPE
        {
            // Duration of the effect.
            enum Duration
            {
                DURATION_NONE = 0,  // No duration.
                DURATION_SHORT,     // Short duration.
                DURATION_MEDIUM,    // Medium duration.
                DURATION_LONG,      // Long duration.
                DURATION_INVALID    // Invalid duration.
            } Duration;             // The time taken for the effect to fade away.

            RZCOLOR Color;         // Color of the effect
        } REACTIVE_EFFECT_TYPE;

        // Starlight effect (Deprecated and should not be used).
        typedef struct STARLIGHT_EFFECT_TYPE
        {
            // Starlight effect types.
            enum _Type
            {
                TWO_COLORS = 1, // 2 colors.
                RANDOM_COLORS   // Random colors
            } Type;

            RZCOLOR Color1;    // First color.
            RZCOLOR Color2;    // Second color.

            // Duration of the effect.
            enum _Duration
            {
                DURATION_SHORT = 1, // Short duration.
                DURATION_MEDIUM,    // Medium duration.
                DURATION_LONG       // Long duration.
            } Duration;             // The time taken for the effect to fade away.

        } STARLIGHT_EFFECT_TYPE;

        //! \~english Static effect type. \~japanese スタティック効果タイプ。 \~korean 스태틱 효과 타입. \~polish Rodzaj efektu statycznego. \~russian Тип статического эффекта. \~chinese 静态效果类型。
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;     //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;

        // Wave effect (Deprecated and should not be used).
        typedef struct WAVE_EFFECT_TYPE
        {
            // Direction of the wave effect.
            enum Direction
            {
                DIRECTION_NONE = 0,         // No direction.
                DIRECTION_LEFT_TO_RIGHT,    // Left to right.
                DIRECTION_RIGHT_TO_LEFT,    // Right to left.
                DIRECTION_INVALID           // Invalid direction.
            } Direction;                    // Direction of the wave.
        } WAVE_EFFECT_TYPE;

        //! \~english Extended keyboards. \~japanese 拡張キーボード。 \~korean 확장형 키보드. \~polish Klawiatury rozszerzone. \~russian Расширенные клавиатуры. \~chinese 扩展键盘。
        namespace v2
        {
            //! \~english Maximum number of rows in an extended keyboard. \~japanese 拡張キーボードの最大行数。 \~korean 확장형 키보드 행의 최대 개수. \~polish Maksymalna liczba wierszy na klawiaturze rozszerzonej. \~russian Максимальное число строк в расширенной клавиатуре. \~chinese 扩展键盘中的最大行数。
            const RZSIZE MAX_ROW = 8;

            //! \~english Maximum number of columns in an extended keyboard. \~japanese 拡張キーボードの最大列数。 \~korean 확장형 키보드 열의 최대 개수. \~polish Maksymalna liczba kolumn na klawiaturze rozszerzonej. \~russian Максимальное число столбцов в расширенной клавиатуре. \~chinese 扩展键盘中的最大列数。
            const RZSIZE MAX_COLUMN = 24;

            //! \~english Custom effect with keys for an extended keyboard. \~japanese 拡張キーボード用キーのカスタム効果。 \~korean 확장형 키보드의 키 사용자 지정 효과. \~polish Efekt niestandardowy z użyciem klawiszy klawiatury rozszerzonej. \~russian Пользовательский эффект с клавишами для расширенной клавиатуры. \~chinese 借助用于扩展键盘的按键自定义效果。
            typedef struct CUSTOM_EFFECT_TYPE
            {
                RZCOLOR Color[MAX_ROW][MAX_COLUMN];                    //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
                RZCOLOR Key[Keyboard::MAX_ROW][Keyboard::MAX_COLUMN];  //!< \~english Keyboard keys. \~japanese キーボードキー。 \~korean 키보드 키. \~polish Klawisze klawiatury. \~russian Клавиши клавиатуры. \~chinese 键盘按键。
            } CUSTOM_EFFECT_TYPE;
        }
    }

    //! \~english Mice. \~japanese マウス。 \~korean 마우스. \~polish Myszy. \~russian Мыши. \~chinese 鼠标。
    namespace Mouse
    {
        //! \~english Maximum number of custom LEDs (old definition to maintain backward compatibility). \~japanese カスタム LED の最大数 (旧バージョン対応の古い定義)。 \~korean 사용자 지정 LED의 최대 개수 (역 호환성을 유지하기 위한 이전 정의). \~polish Maksymalna liczba niestandardowych diod LED (stara definicja w celu zachowania zgodności wstecz). \~russian Максимальное число пользовательских светодиодов (старое определение для сохранения обратной совместимости). \~chinese 自定义 LED 指示灯的最大数量（旧定义以保持向后兼容性）。
        const RZSIZE MAX_LEDS = 30;

        //! \~english Mice LED layout (old definition to maintain backward compatibility). \~japanese マウス LED レイアウト (旧バージョン対応の古い定義)。 \~korean 마우스 LED 레이아웃 (역 호환성을 유지하기 위한 이전 정의). \~polish Układ diod LED myszy (stara definicja w celu zachowania zgodności wstecz). \~russian Компоновка светодиодов мышей (старое определение для сохранения обратной совместимости). \~chinese 鼠标 LED 指示灯布局（旧定义以保持向后兼容性）。
        const RZCOLOR RZLED_LAYOUT[MAX_LEDS] = {};

        //! \~english Maximum number of rows on a mouse. \~japanese マウスの最大行数。 \~korean 마우스에서 행의 최대 개수. \~polish Maksymalna liczba wierszy na myszy. \~russian Максимальное число строк мыши. \~chinese 鼠标中的最大行数。
        const RZSIZE MAX_ROW = 9;

        //! \~english Maximum number of columns on a mouse. \~japanese マウスの最大列数。 \~korean 마우스에서 열의 최대 개수. \~polish Maksymalna liczba kolumn na myszy. \~russian Максимальное число столбцов мыши. \~chinese 鼠标中的最大列数。
        const RZSIZE MAX_COLUMN = 7;

        //! \~english Maximum number of LEDs. \~japanese LED の最大数。 \~korean LED의 최대 개수. \~polish Maksymalna liczba diod LED. \~russian Максимальное число светодиодов. \~chinese LED 指示灯的最大数量。
        const RZSIZE MAX_LEDS2 = MAX_ROW * MAX_COLUMN;

        //! \~english Mice LED layout. \~japanese マウス LED レイアウト。 \~korean 마우스 LED 레이아웃. \~polish Układ diod LED myszy. \~russian Компоновка светодиодов мыши. \~chinese 鼠标 LED 指示灯布局。
        const RZCOLOR RZLED_LAYOUT2[MAX_ROW][MAX_COLUMN] = {};

        // Mouse LED Id defintion (Deprecated and should not be used).
        typedef enum RZLED
        {
            RZLED_NONE = 0,             // No LED.
            RZLED_SCROLLWHEEL = 1,      // Scroll Wheel LED.
            RZLED_LOGO = 2,             // Logo LED.
            RZLED_BACKLIGHT = 3,        // Backlight or numpad.
            RZLED_SIDE_STRIP1 = 4,      // Side strip LED 1. (For Mamba TE, starts from top left hand)
            RZLED_SIDE_STRIP2 = 5,      // Side strip LED 2. (For Mamba TE)
            RZLED_SIDE_STRIP3 = 6,      // Side strip LED 3. (For Mamba TE)
            RZLED_SIDE_STRIP4 = 7,      // Side strip LED 4. (For Mamba TE)
            RZLED_SIDE_STRIP5 = 8,      // Side strip LED 5. (For Mamba TE)
            RZLED_SIDE_STRIP6 = 9,      // Side strip LED 6. (For Mamba TE)
            RZLED_SIDE_STRIP7 = 10,     // Side strip LED 7. (For Mamba TE)
            RZLED_SIDE_STRIP8 = 11,     // Side strip LED 8. (For Mamba TE)
            RZLED_SIDE_STRIP9 = 12,     // Side strip LED 9. (For Mamba TE)
            RZLED_SIDE_STRIP10 = 13,    // Side strip LED 10. (For Mamba TE)
            RZLED_SIDE_STRIP11 = 14,    // Side strip LED 11. (For Mamba TE)
            RZLED_SIDE_STRIP12 = 15,    // Side strip LED 12. (For Mamba TE)
            RZLED_SIDE_STRIP13 = 16,    // Side strip LED 13. (For Mamba TE)
            RZLED_SIDE_STRIP14 = 17,    // Side strip LED 14. (For Mamba TE)
            RZLED_ALL = 0xFFFF
        } RZLED;

        //! \~english Mouse LED Id defintion for the virtual grid. \~japanese 仮想グリッドのマウス LED ID 定義。 \~korean 가상 그리드를 위한 마우스 LED ID 정의. \~polish Definicja identyfikatorów LED myszy do siatki wirtualnej. \~russian Определение идентификатора светодиода мыши для виртуальной решетки. \~chinese 用于虚拟网格的鼠标 LED 指示灯 ID 定义。
        typedef enum RZLED2
        {
            RZLED2_SCROLLWHEEL = 0x0203,  //!< \~english Scroll Wheel LED.
            RZLED2_LOGO = 0x0703,  //!< \~english Logo LED.
            RZLED2_BACKLIGHT = 0x0403,  //!< \~english Backlight LED.
            RZLED2_LEFT_SIDE1 = 0x0100,  //!< \~english Left LED 1.
            RZLED2_LEFT_SIDE2 = 0x0200,  //!< \~english Left LED 2.
            RZLED2_LEFT_SIDE3 = 0x0300,  //!< \~english Left LED 3.
            RZLED2_LEFT_SIDE4 = 0x0400,  //!< \~english Left LED 4.
            RZLED2_LEFT_SIDE5 = 0x0500,  //!< \~english Left LED 5.
            RZLED2_LEFT_SIDE6 = 0x0600,  //!< \~english Left LED 6.
            RZLED2_LEFT_SIDE7 = 0x0700,  //!< \~english Left LED 7.
            RZLED2_BOTTOM1 = 0x0801,  //!< \~english Bottom LED 1.
            RZLED2_BOTTOM2 = 0x0802,  //!< \~english Bottom LED 2.
            RZLED2_BOTTOM3 = 0x0803,  //!< \~english Bottom LED 3.
            RZLED2_BOTTOM4 = 0x0804,  //!< \~english Bottom LED 4.
            RZLED2_BOTTOM5 = 0x0805,  //!< \~english Bottom LED 5.
            RZLED2_RIGHT_SIDE1 = 0x0106,  //!< \~english Right LED 1.
            RZLED2_RIGHT_SIDE2 = 0x0206,  //!< \~english Right LED 2.
            RZLED2_RIGHT_SIDE3 = 0x0306,  //!< \~english Right LED 3.
            RZLED2_RIGHT_SIDE4 = 0x0406,  //!< \~english Right LED 4.
            RZLED2_RIGHT_SIDE5 = 0x0506,  //!< \~english Right LED 5.
            RZLED2_RIGHT_SIDE6 = 0x0606,  //!< \~english Right LED 6.
            RZLED2_RIGHT_SIDE7 = 0x0706   //!< \~english Right LED 7.
        } RZLED2;

        //! \~english Chroma mouse effect types. \~japanese Chroma マウス効果タイプ。 \~korean Chroma 마우스 효과 타입. \~polish Rodzaje efektów myszy Chroma. \~russian Типы эффектов мыши Chroma. \~chinese Chroma 幻彩鼠标效果类型。
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_BLINKING,            // Blinking effect (Deprecated and should not be used).
            CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
            CHROMA_CUSTOM,              // Custom effect type (Deprecated and should not be used).
            CHROMA_REACTIVE,            // Reactive effect (Deprecated and should not be used).
            CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
            CHROMA_STATIC,              //!< \~english Static single color effect (Deprecated and should not be used). \~japanese スタティックシングルカラー効果 (サポート終了予定、使用しないでください)。 \~korean 스태틱 단일 색상 효과 (사용되지 않으며, 사용해서는 안 됨). \~polish Efekt statyczny, jednokolorowy (niezalecane, nie używać). \~russian Эффект статичной подсветки одним цветом (устарел, не рекомендуется к использованию). \~chinese 静态单色效果 （已被弃用，不应再使用）。
            CHROMA_WAVE,                // Wave effect (Deprecated and should not be used).
            CHROMA_CUSTOM2,             //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_STATIC2,             //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        // Static effect type (Deprecated and should not be used.
        typedef struct STATIC_EFFECT_TYPE
        {
            RZLED LEDId;        // LED Id.
            RZCOLOR Color;      // Colors.
        } STATIC_EFFECT_TYPE;

        //! \~english Static effect type. \~japanese スタティック効果タイプ。 \~korean 스태틱 효과 타입. \~polish Rodzaj efektu statycznego. \~russian Тип статического эффекта. \~chinese 静态效果类型。
        typedef struct STATIC_EFFECT_TYPE2
        {
            RZCOLOR Color;      //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE2;

        // Blinking effect (Deprecated and should not be used).
        typedef struct BLINKING_EFFECT_TYPE
        {
            RZLED LEDId;        // LED Id
            RZCOLOR Color;      // Color.
        } BLINKING_EFFECT_TYPE;

        // Breathing effect (Deprecated and should not be used).
        typedef struct BREATHING_EFFECT_TYPE
        {
            RZLED LEDId;        // LED Id

            // Breathing type.
            enum Type
            {
                ONE_COLOR = 1,  // 1 color (Only fill Color1).
                TWO_COLORS,     // 2 colors.
                RANDOM_COLORS,  // Random colors
                INVALID         // Invalid type
            } Type;

            RZCOLOR Color1;     // First color.
            RZCOLOR Color2;     // Second color.
        } BREATHING_EFFECT_TYPE;

        // Custom effect (Deprecated and should not be used).
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_LEDS];    // Array of colors.
        } CUSTOM_EFFECT_TYPE;

        //! \~english Custom effect using virtual grid. \~japanese 仮想グリッドを使用したカスタム効果。 \~korean 가상 그리드를 사용한 사용자 지정 효과. \~polish Efekty niestandardowe z użyciem siatki wirtualnej. \~russian Пользовательский эффект с использованием виртуальной сетки. \~chinese 使用虚拟网格的自定义效果。
        typedef struct CUSTOM_EFFECT_TYPE2
        {
            RZCOLOR Color[MAX_ROW][MAX_COLUMN]; //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } CUSTOM_EFFECT_TYPE2;

        // Reactive effect (Deprecated and should not be used).
        typedef struct REACTIVE_EFFECT_TYPE
        {
            RZLED LEDId;        // LED Id

            // Duration of the effect.
            enum Duration
            {
                DURATION_NONE = 0,  // No duration.
                DURATION_SHORT,     // Short duration.
                DURATION_MEDIUM,    // Medium duration.
                DURATION_LONG       // Long duration.
            } Duration;

            RZCOLOR Color;          // Color of the effect.
        } REACTIVE_EFFECT_TYPE;

        // No effect (Deprecated and should not be used).
        typedef struct NO_EFFECT_TYPE
        {
            RZLED LEDId;        // LED Id. \~chinese 颜色
        } NO_EFFECT_TYPE;

        // Spectrum cycling effect (Deprecated and should not be used).
        typedef struct SPECTRUMCYCLING_EFFECT_TYPE
        {
            RZLED LEDId;            // LED id.
        } SPECTRUMCYCLING_EFFECT_TYPE;

        // Wave effect (Deprecated and should not be used).
        typedef struct WAVE_EFFECT_TYPE
        {
            // Direction of the wave effect.
            enum Direction
            {
                FRONT_TO_BACK,      // Front to back
                BACK_TO_FRONT       // Back to front
            } Direction;
        } WAVE_EFFECT_TYPE;
    }

    //! \~english Headsets. \~japanese ヘッドセット。 \~korean 헤드셋. \~polish Zestawy słuchawkowe. \~russian Гарнитуры. \~chinese 耳麦。
    namespace Headset
    {
        //! \~english Maximum number of LEDs. \~japanese LED の最大数。 \~korean LED의 최대 개수. \~polish Maksymalna liczba diod LED. \~russian Максимальное число светодиодов. \~chinese LED 指示灯的最大数量。
        const RZSIZE MAX_LEDS = 5;

        //! \~english Chroma headset effect types. \~japanese Chroma ヘッドセット効果タイプ。 \~korean Chroma 헤드셋 효과 타입. \~polish Rodzaje efektów zestawów słuchawkowych Chroma. \~russian Типы эффектов гарнитуры Chroma. \~chinese Chroma 幻彩耳麦效果类型。
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
            CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
            CHROMA_CUSTOM,              //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        //! \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;             //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;

        // Breathing effect (Deprecated and should not be used).
        typedef struct BREATHING_EFFECT_TYPE
        {
            RZCOLOR Color;             // Color.
        } BREATHING_EFFECT_TYPE;

        //! \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_LEDS];    //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } CUSTOM_EFFECT_TYPE;
    }

    //! \~english Mousepads \~japanese マウスパッド。 \~korean 마우스 패드 \~polish Podkładki pod mysz \~russian Коврики для мыши \~chinese 鼠标垫
    namespace Mousepad
    {
        //! \~english Maximum number of LEDs. \~japanese LED の最大数。 \~korean LED의 최대 개수. \~polish Maksymalna liczba diod LED. \~russian Максимальное число светодиодов. \~chinese LED 指示灯的最大数量。
        const RZSIZE MAX_LEDS = 15;

        //! \~english Chroma mousepad effect types. \~japanese Chroma マウスパッド効果タイプ。 \~korean Chroma 마우스 패드 효과 타입. \~polish Rodzaje efektów podkładek pod mysz Chroma. \~russian Типы эффектов коврика для мыши Chroma. \~chinese Chroma 幻彩鼠标垫效果类型。
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
            CHROMA_CUSTOM,              //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
            CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_WAVE,                // Wave effect (Deprecated and should not be used).
            CHROMA_CUSTOM2,             //!< \~english Custom effect with 20 virtual LEDs. First element starts from top-right and it goes clockwise full circle with 5 LEDs on each side. \~japanese 20 仮想 LED によるカスタム効果。最初の要素は右上から始まり、各サイドで 5 つの LED で時計回りに一周します。 \~korean 가상 LED 20개를 사용한 사용자 지정 효과. 먼저 우측 상단 요소부터 시작해시계 방향으로 한 바퀴 돌며 각 측면에 LED가 5개씩 있음. \~polish Efekty niestandardowy z użyciem 20 wirtualnych diod LED. Pierwszy element zaczyna się z prawej strony u góry i przechodzi w prawo, wykonując pełny okrąg 5 diodami LED po każdej stronie. \~russian Пользовательский эффект с 20 виртуальными светодиодами. Первый элемент стоит в верхнем правом углу. Элементы отсчитываются по часовой стрелке и делают полный оборот. С каждой стороны находятся 5 светодиодов. \~chinese 通过 20 个虚拟 LED 指示灯实现的自定义效果。第一个元素位于右上角，然后以顺时针排列并形成一整圈，而且每侧有 5 个 LED 指示灯。
            CHROMA_INVALID,             //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        // Chroma mousepad effects
        // Breathing effect (Deprecated and should not be used).
        typedef struct BREATHING_EFFECT_TYPE
        {
            // Breathing effects.
            enum Type
            {
                TWO_COLORS = 1,     // 2 colors
                RANDOM_COLORS,      // Random colors
                INVALID
            } Type;
            RZCOLOR Color1;    // First color.
            RZCOLOR Color2;    // Second color.
        } BREATHING_EFFECT_TYPE;

        //! \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_LEDS];    //!< \~english An array of colors for all the sides of the mousepad. First LED starts from top-right corner. \~japanese マウスパッドのすべてのサイドの色配列。最初の LED は右上から始まります。 \~korean 마우스 패드의 모든 면을 위한 다양한 색상. 먼저 우측 상단의 LED부터 시작. \~polish Układ kolorów dla wszystkich stron podkładki pod mysz. Pierwsza dioda LED zaczyna z prawej strony u góry. \~russian Палитра цветов для всех сторон коврика для мыши. Первый светодиод стоит в верхнем-правом углу. \~chinese 鼠标垫所有侧边的颜色数组。第一个 LED　指示灯从右上角开始。
                                        //!< \~english LED 0-4 right side, 5-9 bottom side, 10-14 left side. \~japanese LED 0～4 右側、5～9 下部、10～14 左側。 \~korean LED 0~4 우측, 5~9 하단부, 10~14 좌측. \~polish LED 0–4 z prawej strony, 5–9 z dołu, 10–14 z lewej strony. \~russian Правая сторона: светодиоды 0–4, нижняя сторона: 5–9, левая сторона: 10–14. \~chinese LED　指示灯 0-4　位于右侧，5-9　位于底部，10-14　位于左侧。
        } CUSTOM_EFFECT_TYPE;

        //! \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;     //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;

        // Wave effect (Deprecated and should not be used).
        typedef struct WAVE_EFFECT_TYPE
        {
            // Direction of the wave effect.
            enum Direction
            {
                DIRECTION_NONE = 0,         // No direction.
                DIRECTION_LEFT_TO_RIGHT,    // Left to right.
                DIRECTION_RIGHT_TO_LEFT,    // Right to left.
                DIRECTION_INVALID           // Invalid direction.
            } Direction;                    // Direction of the wave.
        } WAVE_EFFECT_TYPE;

        //! \~english Extended mousepads \~japanese 拡張マウスパッド。 \~korean 확장형 마우스 패드 \~polish Rozszerzone podkładki pod mysz \~russian Расширенные коврики для мыши \~chinese 扩展鼠标垫
        namespace v2
        {
            //! \~english Maximum number of LEDs. \~japanese LED の最大数。 \~korean LED의 최대 개수. \~polish Maksymalna liczba diod LED. \~russian Максимальное число светодиодов. \~chinese LED 指示灯的最大数量。
            const RZSIZE MAX_LEDS = 20;

            //! \~english Custom effect with 20 virtual LEDs. First element starts from top-right and it goes clockwise full circle with 5 LEDs on each side. \~japanese 20 仮想 LED によるカスタム効果。最初の要素は右上から始まり、各サイドで 5 つの LED で時計回りに一周します。 \~korean 가상 LED 20개를 사용한 사용자 지정 효과. 먼저 우측 상단 요소부터 시작해시계 방향으로 한 바퀴 돌며 각 측면에 LED가 5개씩 있음. \~polish Efekty niestandardowy z użyciem 20 wirtualnych diod LED. Pierwszy element zaczyna się z prawej strony u góry i przechodzi w prawo, wykonując pełny okrąg 5 diodami LED po każdej stronie. \~russian Пользовательский эффект с 20 виртуальными светодиодами. Первый элемент стоит в верхнем правом углу. Элементы отсчитываются по часовой стрелке и делают полный оборот. С каждой стороны находятся 5 светодиодов. \~chinese 通过 20 个虚拟 LED 指示灯实现的自定义效果。第一个元素位于右上角，然后以顺时针排列并形成一整圈，而且每侧有 5 个 LED 指示灯。
            typedef struct CUSTOM_EFFECT_TYPE
            {
                RZCOLOR Color[MAX_LEDS];    //!< \~english An array of colors for all the sides of the mousepad. First LED starts from top-right corner. \~japanese マウスパッドのすべてのサイドの色配列。最初の LED は右上から始まります。 \~korean 마우스 패드의 모든 면을 위한 다양한 색상. 먼저 우측 상단의 LED부터 시작. \~polish Układ kolorów dla wszystkich stron podkładki pod mysz. Pierwsza dioda LED zaczyna z prawej strony u góry. \~russian Палитра цветов для всех сторон коврика для мыши. Первый светодиод стоит в верхнем-правом углу. \~chinese 鼠标垫所有侧边的颜色数组。第一个 LED　指示灯从右上角开始。
            } CUSTOM_EFFECT_TYPE;
        }
    }

    //! \~english Keypads \~japanese キーパッド。 \~korean 키패드 \~polish Keypady \~russian Клавишные блоки \~chinese 键盘
    namespace Keypad
    {
        //! \~english Maximum number of rows on a keypad. \~japanese キーパッドの最大行数。 \~korean 키패드에서 행의 최대 개수. \~polish Maksymalna liczba wierszy na keypadzie. \~russian Максимальное число строк клавишного блока. \~chinese 键盘中的最大行数。
        const RZSIZE MAX_ROW = 4;

        //! \~english Maximum number of columns on a keypad. \~japanese キーパッドの最大列数。 \~korean 키패드에서 열의 최대 개수. \~polish Maksymalna liczba kolumn na keypadzie. \~russian Максимальное число столбцов клавишного блока. \~chinese 键盘中的最大列数。
        const RZSIZE MAX_COLUMN = 5;

        //! \~english Maximum number of keys. \~japanese キーの最大数。 \~korean 키의 최대 개수. \~polish Maksymalna liczba klawiszy. \~russian Максимальное число клавиш. \~chinese 按键的最大数量。
        const RZSIZE MAX_KEYS = MAX_ROW * MAX_COLUMN;

        //! \~english Chroma keypad effect types.  \~japanese Chroma キーパッド効果タイプ。  \~korean Chroma 키패드 효과 타입.  \~polish Rodzaje efektów keypadów Chroma.  \~russian Типы эффектов клавишного блока Chroma.  \~chinese Chroma 幻彩键盘效果类型。 
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_BREATHING,           // Breathing effect (Deprecated and should not be used).
            CHROMA_CUSTOM,              //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_REACTIVE,            // Reactive effect (Deprecated and should not be used).
            CHROMA_SPECTRUMCYCLING,     // Spectrum cycling effect (Deprecated and should not be used).
            CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_WAVE,                // Wave effect (Deprecated and should not be used).
            CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        // Chroma keypad effects
        // Breathing effect (Deprecated and should not be used).
        typedef struct BREATHING_EFFECT_TYPE
        {
            // Breathing effects.
            enum Type
            {
                TWO_COLORS = 1,     // 2 colors
                RANDOM_COLORS,      // Random colors
                INVALID             // Invalid type
            } Type;
            RZCOLOR Color1;    // First color.
            RZCOLOR Color2;    // Second color.
        } BREATHING_EFFECT_TYPE;

        //! \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_ROW][MAX_COLUMN]; //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
                                                //!< \~english For Razer Tartarus Chroma only Color[0] is valid. Use index '0' to change the keypad color.
        } CUSTOM_EFFECT_TYPE;

        // Reactive effect (Deprecated and should not be used).
        typedef struct REACTIVE_EFFECT_TYPE
        {
            // Duration of the effect.
            enum Duration
            {
                DURATION_NONE = 0,  // No duration.
                DURATION_SHORT,     // Short duration.
                DURATION_MEDIUM,    // Medium duration.
                DURATION_LONG,      // Long duration.
                DURATION_INVALID    // Invalid duration.
            } Duration;             // The time taken for the effect to fade away.

            RZCOLOR Color;          // Color of the effect
        } REACTIVE_EFFECT_TYPE;

        //! \~english Static effect type. \~japanese スタティック効果タイプ。 \~korean 스태틱 효과 타입. \~polish Rodzaj efektu statycznego. \~russian Тип статического эффекта. \~chinese 静态效果类型。
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;  //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;

        // Wave effect (Deprecated and should not be used).
        typedef struct WAVE_EFFECT_TYPE
        {
            // Direction of the wave effect.
            enum Direction
            {
                DIRECTION_NONE = 0,         // No direction.
                DIRECTION_LEFT_TO_RIGHT,    // Left to right.
                DIRECTION_RIGHT_TO_LEFT,    // Right to left.
                DIRECTION_INVALID           // Invalid direction.
            } Direction;                    // Direction of the wave.
        } WAVE_EFFECT_TYPE;
    }

    //! \~ Chroma Link.
    namespace ChromaLink
    {
        //! \~english Maximum number of LEDs. \~japanese LED の最大数。 \~korean LED의 최대 개수. \~polish Maksymalna liczba diod LED. \~russian Максимальное число светодиодов. \~chinese LED 指示灯的最大数量。
        const RZSIZE MAX_LEDS = 5;

        //! \~english Chroma Link effect types \~japanese Chroma Link 効果タイプ。 \~korean Chroma Link 효과 타입 \~polish Rodzaje efektów Chroma Link. \~russian Типы эффектов Chroma Link \~chinese 幻彩链接 (Chroma Link) 效果类型
        typedef enum EFFECT_TYPE
        {
            CHROMA_NONE = 0,            //!< \~english No effect. \~japanese 効果なし。 \~korean 효과 없음. \~polish Brak efektu. \~russian Без эффекта. \~chinese 无效果。
            CHROMA_CUSTOM,              //!< \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
            CHROMA_STATIC,              //!< \~english Static single color effect. \~japanese スタティックシングルカラー効果。 \~korean 스태틱 단일 색상 효과. \~polish Efekt statyczny, jednokolorowy. \~russian Эффект статичной подсветки одним цветом. \~chinese 静态单色效果。
            CHROMA_INVALID              //!< \~english Invalid effect. \~japanese 無効な効果。 \~korean 유효하지 않은 효과. \~polish Nieprawidłowy efekt. \~russian Недопустимый эффект. \~chinese 无效效果。
        } EFFECT_TYPE;

        /*! 
         * \~english Custom effect type.\n 
         * \~english Use Custom type to create a sequence of animated effects.\n
         * \~english [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        /*! 
         * \~japanese カスタム効果タイプ。。\n 
         * \~japanese カスタムタイプを使用して生き生きとした効果シーケンスを作成します。\n
         * \~japanese [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        /*! 
         * \~korean 사용자 지정 효과 타입.\n 
         * \~korean 애니메이션 효과 시퀸스를 생성하려면 사용자 지정 타입 사용.\n
         * \~korean [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        /*! 
         * \~polish Rodzaj efektu niestandardowego.\n 
         * \~polish Użyj rodzaju niestandardowego, aby utworzyć sekwencję efektów animowanych.\n
         * \~polish [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        /*! 
         * \~russian Тип пользовательского эффекта.\n 
         * \~russian Для создания последовательности анимированных эффектов используйте пользовательский тип.\n
         * \~russian [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        /*!
         * \~chinese 自定义效果类型。\n
         * \~chinese 使用“自定义类型”创建一系列动画效果。\n
         * \~chinese [ChromaLinkL#1|ChromaLinkL#2|ChromaLinkL#3|ChromaLinkL#4|ChromaLinkL#5].
         */
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_LEDS];    //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } CUSTOM_EFFECT_TYPE;

        /*! 
         * \~english Static effect type.\n
         * \~english Use Static type to create effects for all LEDs (ChromaLinkL#1).
         */
        /*!
         * \~japanese スタティック効果タイプ。\n
         * \~japanese スタティックタイプを使用してすべての LED の効果を作成します (ChromaLinkL#1)。
         */
        /*!
         * \~korean 스태틱 효과 타입.\n
         * \~korean 모든 LED에 대한 효과를 생성하려면 스태틱 타입 사용 (ChromaLinkL#1).
         */
        /*!
         * \~polish Rodzaj efektu statycznego.\n
         * \~polish Użyj rodzaju statycznego, aby utworzyć efekty obejmujące wszystkie diody LED (ChromaLinkL#1).
         */
        /*!
         * \~russian Тип статического эффекта.\n
         * \~russian Для создания эффектов для всех светодиодов используйте статический тип (ChromaLinkL#1).
         */
        /*!
         * \~chinese 静态效果类型。
         * \~chinese 使用静态类型为所有LED创建效果。
         */
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;  //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;
    }

    //! \~ Virtual desktop. \~japanese 仮想デスクトップ。 \~korean 가상 데스크탑. \~polish pulpit wirtualny. \~russian виртуальный рабочий стол. \~chinese 虚拟桌面。
    namespace Desktop
    {
        const RZSIZE MAX_ROW = 19;  //!< \~english Maximum rows for custom effects. \~japanese カスタム効果の最大行。 \~korean 사용자 지정 효과를 위한 최대 행. \~polish Maksymalna liczba wierszy na efekty niestandardowe. \~russian Максимальное число строк для пользовательских эффектов. \~chinese 自定义效果的最大行数。

        const RZSIZE MAX_COLUMN = 37;   //!< \~english Maximum columns for custom effects. \~japanese カスタム効果の最大列。 \~korean 사용자 지정 효과를 위한 최대 열. \~polish Maksymalna liczba kolumn na efekty niestandardowe. \~russian Максимальное число столбцов для пользовательских эффектов. \~chinese 自定义效果的最大列数。

        const RZSIZE MAX_SIZE = MAX_ROW * MAX_COLUMN;

        //! \~english Custom effect type. \~japanese カスタム効果タイプ。 \~korean 사용자 지정 효과 타입. \~polish Rodzaj efektu niestandardowego. \~russian Тип пользовательского эффекта. \~chinese 自定义效果类型。
        typedef struct CUSTOM_EFFECT_TYPE
        {
            RZCOLOR Color[MAX_ROW][MAX_COLUMN]; //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } CUSTOM_EFFECT_TYPE;

        //! \~english Static effect type. \~japanese スタティック効果タイプ。 \~korean 스태틱 효과 타입. \~polish Rodzaj efektu statycznego. \~russian Тип статического эффекта. \~chinese 静态效果类型。
        typedef struct STATIC_EFFECT_TYPE
        {
            RZCOLOR Color;  //!< \~english Colors. \~japanese カラー。 \~korean 색상. \~polish Kolory. \~russian Цвета. \~chinese 颜色。
        } STATIC_EFFECT_TYPE;
    }
}

#endif
