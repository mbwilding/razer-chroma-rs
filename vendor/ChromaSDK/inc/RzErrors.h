
//! \file RzErrors.h
//! \brief \~english Error codes for Chroma SDK. If the error is not defined here, refer to WinError.h from the Windows SDK.
//! \brief \~chinese Chroma SDK 的错误代码。对于此处未定义的错误，请参阅 Windows SDK 中的 WinError.h。
//! \brief \~japanese Chroma SDK のエラーコード。エラーがここに定義されていない場合、Windows SDK のWinError.h を参照してください。
//! \brief \~korean Chroma SDK에 대한 오류 코드. 여기에 정의되지 않은 오류가 있다면, Windows SDK의 WinError.h를 참조하십시오. 
//! \brief \~polish Kody błędów Chroma SDK. Jeśli nie zdefiniowano tutaj szukanego błędu, patrz WinError.h w Windows SDK. 
//! \brief \~russian Коды ошибок для Chroma SDK. Если ошибка не определена здесь, см. файл WinError.h из Windows SDK. 

#ifndef _RZERRORS_H_
#define _RZERRORS_H_

#pragma once

// Error codes
//! \~english Invalid \~chinese 无效。 \~japanese 無効。 \~korean 잘못됨. \~polish Nieprawidłowe. \~russian Недопустимый.
#define     RZRESULT_INVALID                    -1L
//! \~english Success \~chinese 成功。 \~japanese 成功。 \~korean 성공. \~polish Działanie zakończone powodzeniem. \~russian Успех.
#define     RZRESULT_SUCCESS                    0L
//! \~english Access denied \~chinese 拒绝访问。 \~japanese アクセス拒否。 \~korean 액세스 거부됨. \~polish Odmowa dostępu. \~russian Доступ запрещен.
#define     RZRESULT_ACCESS_DENIED              5L
//! \~english Invalid handle \~chinese 句柄无效。 \~japanese 無効なハンドル。 \~korean 잘못된 핸들. \~polish Nieprawidłowy dojście. \~russian Доступ запрещен.
#define     RZRESULT_INVALID_HANDLE             6L
//! \~english Not supported \~chinese 不支持。 \~japanese サポートされていません。 \~korean 지원되지 않음. \~polish Nieobsługiwane. \~russian Недопустимый дескриптор.
#define     RZRESULT_NOT_SUPPORTED              50L
//! \~english Invalid parameter  \~chinese 参数无效。 \~japanese 無効なパラメーター。 \~korean 잘못된 파라미터. \~polish Nieprawidłowy parametr. \~russian Не поддерживается.
#define     RZRESULT_INVALID_PARAMETER          87L
//! \~english The service has not been started  \~chinese 服务尚未启动。 \~japanese サービスが起動していません。 \~korean 서비스가 시작되지 않았습니다. \~polish Usługa nie została uruchomiona. \~russian Недопустимый параметр.
#define     RZRESULT_SERVICE_NOT_ACTIVE         1062L
//! \~english Cannot start more than one instance of the specified program  \~chinese 无法启动指定程序的多个实例。 \~japanese 指定したプログラムの 1 つ以上のインスタンスを開始できません。 \~korean 지정된 프로그램의 인스턴스를 두 개 이상 시작할 수 없습니다. \~polish Nie można uruchomić więcej niż jednej instancji określonego programu. \~russian Служба не запущена.
#define     RZRESULT_SINGLE_INSTANCE_APP        1152L
//! \~english Device not connected  \~chinese 设备未连接。 \~japanese デバイスが接続されていません。 \~korean 기기가 연결되어 있지 않음. \~polish Urządzenie nie jest podłączone. \~russian Не удается запустить более одного экземпляра указанной программы.
#define     RZRESULT_DEVICE_NOT_CONNECTED       1167L
//! \~english Element not found. \~chinese 未找到元素。 \~japanese 要素が見つかりません。 \~korean 요소를 찾을 수 없음. \~polish Nie znaleziono elementu. \~russian Устройство не подключено.
#define     RZRESULT_NOT_FOUND                  1168L
//! \~english Request aborted.  \~chinese 请求已中止。 \~japanese 要求が中止されました。 \~korean 요청이 중단됨. \~polish Żądanie przerwane. \~russian Элемент не найден.
#define     RZRESULT_REQUEST_ABORTED            1235L
//! \~english An attempt was made to perform an initialization operation when initialization has already been completed. \~chinese 初始化完成后，已尝试执行初始化操作。 \~japanese 初期化がすでに完了している状況で初期化操作が試行されました。 \~korean 초기화가 이미 완료된 뒤에 초기화 작업을 수행하려는 시도가 있었습니다. \~polish Dokonano próby uruchomienia operacji inicjalizacji, jednak inicjalizacja została już wcześniej ukończona. \~russian Запрос прерван.
#define     RZRESULT_ALREADY_INITIALIZED        1247L
//! \~english Resource not available or disabled  \~chinese 资源不可用或被禁用。 \~japanese リソースが利用できないか、無効です。 \~korean 리소스를 사용할 수 없거나 비활성화되어 있음. \~polish Zasób nie jest dostępny lub jest zablokowany. \~russian Произведена попытка инициализации после того, как инициализация уже была выполнена.
#define     RZRESULT_RESOURCE_DISABLED          4309L
//! \~english Device not available or supported  \~chinese 设备不可用或不受支持。 \~japanese デバイスが利用できないか、サポートされていません。 \~korean 장치를 사용할 수 없거나 지원하지 않음. \~polish Urządzenie niedostępne lub nieobsługiwane. \~russian Ресурс недоступен или выключен.
#define     RZRESULT_DEVICE_NOT_AVAILABLE       4319L
//! \~english The group or resource is not in the correct state to perform the requested operation.  \~chinese 组或资源的状态不正确，无法执行请求的操作。 \~japanese グループまたはリソースは、要求した操作を実行するために適切な状態にありません。 \~korean 요청된 작업을 수행하기에 그룹 또는 리소스가 올바른 상태가 아닙니다. \~polish Grupa lub zasób nie jest we właściwym stanie umożliwiającym wykonanie żądanej operacji. \~russian Группа или ресурс находятся в неправильном состоянии для выполнения запрошенной операции.
#define     RZRESULT_NOT_VALID_STATE            5023L
//! \~english No more items  \~chinese 无更多项目。 \~japanese これ以上アイテムはありません。 \~korean 더 이상 항목이 없습니다. \~polish Nie ma już więcej elementów. \~russian Других элементов нет.
#define     RZRESULT_NO_MORE_ITEMS              259L
//! \~english General failure.  \~chinese 一般错误。 \~japanese 一般的な障害。 \~korean 일반적인 실패. \~polish Błąd ogólny. \~russian Общий сбой.
#define     RZRESULT_FAILED                     2147500037L

#endif
