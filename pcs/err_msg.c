
const char* get_login_errmsg(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case -1:// "ϵͳ����,�����Ժ����� ";
        errmsg = "System error, try again later";
        break;
    case 0:
        errmsg = "Success";
        break;
    case 1: // "��������ʺŸ�ʽ����ȷ";
        errmsg = "Incorrect username";
        break;
    case 2: // "��������ʺŲ�����";
        errmsg = "Username not exist";
        break;
    case 3: // "��֤�벻���ڻ��ѹ���,����������";
        errmsg = "Captcha invalid, try again";
        break;
    case 4: // "��������ʺŻ���������";
        errmsg = "Wrong password";
        break;
    case 5: // "��������������ڰ�ȫ���գ����л������ʹ�ö��ŵ�¼";
        errmsg = "There is a security risk in your network, please use SMS to log in.";
        break;
    case 120019: //���ڵ����Ĵ��ڲ���,�����µ�¼
    case 400031: //���ڵ����Ĵ��ڲ���,�����µ�¼
        errmsg = "See popped out window.";
        break;
    case 120021: //��¼ʧ��,���ڵ����Ĵ��ڲ���,�����µ�¼
        errmsg = "Wrong SMS password, please try again";
        break;
    case 120016:
        errmsg = "Account is at risk, please bind your phone on http://pan.baidu.com .";
        break;
    case 6: // "���������֤������";
        errmsg = "Wrong captcha.";
        break;
    case 7: // "������󣬿������Զ��ŵ�¼";
        errmsg = "Wrong password, try sms password.";
        break;
    case 16: // "�����ʺ���ȫ�����ѱ����Ƶ�¼";
        errmsg = "Your account has been locked.";
        break;
    case 17: //�����ʺ�������,��������¼
        errmsg = "Your account has been locked. Login after unlock your account.";
        break;
    case 18:
    case 400032:
    case 400034:
    case 400037:
    case 400401:
        errmsg = "";// no message, see https://github.com/GangZhuo/BaiduPCS/issues/29
        break;
    case 257: // "��������֤��";
        errmsg = "Wrong captcha.";
        break;
    case 100005: //ϵͳ����,�����Ժ�����
        errmsg = "System error. Please try again later.";
        break;
    case 100023: //����Cookie֮����ܵ�¼
        errmsg = "Cookie must be open for login.";
        break;
    case 100027: // "�ٶ����ڽ���ϵͳ��������ʱ�����ṩ���񣬾����½�";
        errmsg = "System upgrading... Unable to provide services. Please try again later.";
        break;
    case 110024: //���ʺ���δ����,�ط���֤�ʼ�
        errmsg = "This account is not activated. Resending the activation email.";
        break;
    case 200010: //��֤�벻���ڻ��ѹ���
        errmsg = "Captcha not exist or expired.";
        break;
    case 401007: // "�����ֻ��Ź����������ʺţ���ѡ���¼";
        errmsg = "Your phone number was associated with more than one account, please login with the user name.";
        break;
    case 500010: //��¼����Ƶ��,��24Сʱ������
        errmsg = "Login too frequently, please try again after 24 hours.";
        break;
    default:
        errmsg = "Unknown error.";
        break;
    }
    return errmsg;
}

/* ������JS��ȡ��Ӧ��������API�Ĵ�����Ϣ��Ȼ��ͨ�� Google ���룬����ΪӢ�ġ� */
const char* get_errmsg_by_errno(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case 0:
        errmsg = "Success.";// "�ɹ�";
        break;
    case 1:
        errmsg = "Server Error.";// "���������� ";
        break;
    case 2:
        errmsg = "The folder can not being move.";// "���ļ��в������ƶ�";
        break;
    case 3:
        errmsg = "Can not operation files more than 100 at one time.";// "һ�β����ļ����ɳ���100��";
        break;
    case 4:
        errmsg = "New file name error.";// "���ļ�������";
        break;
    case 5:
        errmsg = "Target directory illegal.";// "Ŀ��Ŀ¼�Ƿ�";
        break;
    case 6:
        errmsg = "Alternate";// "����";
        break;
    case 7:
        errmsg = "NS illegal or Access Denied.";// "NS�Ƿ�����Ȩ����";
        break;
    case 8:
        errmsg = "ID illegally or Access Denied";// "ID�Ƿ�����Ȩ����";
        break;
    case 9:
        errmsg = "Applicate key failure";// "����keyʧ��";
        break;
    case 10:
        errmsg = "Failed to create a file of superfile";// "�����ļ���superfileʧ��";
        break;
    case 11:
        errmsg = "user_id (or user_name) illegal or non-exist";// "user_id(��user_name)�Ƿ��򲻴���";
        break;
    case 12:
        errmsg = "Batch processing is not successful at all.";// "��������δȫ���ɹ�";
        break;
    case 13:
        errmsg = "This directory can not be shared";// "��Ŀ¼�޷�����";
        break;
    case 103:
        errmsg = "File passcode error";// "��ȡ�����";
        break;
    case 104:
        errmsg = "Invalid cookie authentication";// "��֤cookie��Ч";
        break;
    case 14:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
        errmsg = "System error";// "ϵͳ����";
        break;
    case 211:
        errmsg = "No Permissions or banned";// "��Ȩ�����򱻷��";
        break;
    case 301:
        errmsg = "Other request error";// "�����������";
        break;
    case 404:
        errmsg = "Second pass md5 mismatch error code rapidupload";// "�봫md5��ƥ�� rapidupload ������";
        break;
    case 406:
        errmsg = "Sec transfer error code Failed to create file rapidupload";// "�봫�����ļ�ʧ�� rapidupload ������";
        break;
    case 407:
        errmsg = "fileModify interface returns an error, requestid rapidupload does not return an error code";// "fileModify�ӿڷ��ش���δ����requestid rapidupload ������";
        break;
    case 501:
        errmsg = "LIST format acquired illegally";// "��ȡ��LIST��ʽ�Ƿ�";
        break;
    case 600:
        errmsg = "json parse error";// "json��������";
        break;
    case 601:
        errmsg = "exception thrown";// "exception�׳��쳣";
        break;
    case 617:
        errmsg = "getFilelist other error";// "getFilelist��������";
        break;
    case 618:
        errmsg = "Request curl returns failure";// "����curl����ʧ��";
        break;
    case 619:
        errmsg = "pcs returns an error code";// "pcs���ش�����";
        break;
    case 31021:
        errmsg = "Network connection fails. Check the network or try again later.";// "��������ʧ�ܣ�����������Ժ�����";
        break;
    case 31075:
        errmsg = "One in support of Operation 999, minus point try";// "һ��֧�ֲ���999�����������԰�";
        break;
    case 31080:
        errmsg = "Server error. Try again later.";// "���ǵķ����������ˣ��Ժ����԰�";
        break;
    case 31116:
        errmsg = "You have been reach the quota. Buy more!";// "��Ŀռ䲻����Ӵ���Ͻ�����ռ��";
        break;
    case -1:
        errmsg = "Password authentication failed";// "�û�����������֤ʧ��";
        break;
    case -2:
        errmsg = "Alternate";// "����";
        break;
    case -3:
        errmsg = "The user does not activate (call init interface)";// "�û�δ�������init�ӿڣ�";
        break;
    case -4:
        errmsg = "Can't find host_key and user_key (BDUSS) from COOKIE";// "COOKIE��δ�ҵ�host_key&user_key����BDUSS��";
        break;
    case -5:
        errmsg = "host_key and user_key (BDUSS) are invalid";// "host_key��user_key��Ч";
        break;
    case -6:
        errmsg = "BDUSS invalid";// "bduss��Ч";
        break;
    case -7:
        errmsg = "File / directory name wrong, or do not have access to";// "�ļ���Ŀ¼���������Ȩ����";
        break;
    case -8:
        errmsg = "This file is already exists in this directory";// "��Ŀ¼���Ѵ��ڴ��ļ�";
        break;
    case -9:
        errmsg = "Owner of the file is deleted, operation failed";// "�ļ���������ɾ��������ʧ��";
        break;
    case -10:
        errmsg = "Network Disk quota reached.";// "���̿ռ�����";
        break;
    case -11:
        errmsg = "Parent directory does not exist";// "��Ŀ¼������";
        break;
    case -12:
        errmsg = "Device not registered";// "�豸��δע��";
        break;
    case -13:
        errmsg = "Device is already bounded to your account";// "�豸�Ѿ�����";
        break;
    case -14:
        errmsg = "Account has been initialized";// "�ʺ��Ѿ���ʼ��";
        break;
    case -21:
        errmsg = "Preset files can not be related operations";// "Ԥ���ļ��޷�������ز���";
        break;
    case -22:
        errmsg = "The file can not be shared rename, move, and so";// "��������ļ��޷����������ƶ��Ȳ���";
        break;
    case -23:
        errmsg = "Database operation fails. Contact baidu administrator";// "���ݿ����ʧ�ܣ�����ϵnetdisk����Ա";
        break;
    case -24:
        errmsg = "No cancellations public file containing a list of files you want to cancel.";// "Ҫȡ�����ļ��б��к��в�����ȡ��public���ļ���";
        break;
    case -25:
        errmsg = "Non-beta user";// "�ǹ����û�";
        break;
    case -26:
        errmsg = "Invalid invitation code";// "������ʧЧ";
        break;
    default:
        errmsg = "Unknown error";
        break;
    }
    return errmsg;
}

/*������JS��ȡ��Ӧ���ǹ����ļ��Ĵ�����Ϣ��Ȼ��ͨ�� Google ���룬����ΪӢ�ġ�*/
const char* get_share_errmsg_by_errno(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case 0:
        errmsg = "Success";//"�ɹ�";
        break;
    case 2:
        errmsg = "Parameter error";// "��������";
        break;
    case 3:
        errmsg = "Not logged in or have an invalid account";// "δ��¼���ʺ���Ч";
        break;
    case 4:
        errmsg = "Storage error, please try again later";// "�洢����������ˣ����Ժ�����";
        break;
    case 108:
        errmsg = "Filename have sensitive word. Rename it.";// "�ļ��������дʣ��Ż�һ�°�";
        break;
    case 110:
        errmsg = "Share the number exceeds the limit, you can go to \"my share\" in the view shared file links";// "��������������ƣ����Ե����ҵķ����в鿴�ѷ�����ļ�����";
        break;
    case 114:
        errmsg = "The current mandate does not exist. Saving fails";// "��ǰ���񲻴��ڣ�����ʧ��";
        break;
    case 115:
        errmsg = "The document prohibits to Share";// "���ļ���ֹ����";
        break;
    case -1:
        errmsg = "Because you have been shared a file in violation of relevant laws and regulations, sharing has been disabled. (History share out files are not affected.)";// "������������Υ����ط��ɷ�����ļ����������ѱ����ã�֮ǰ�����ȥ���ļ�����Ӱ�졣";
        break;
    case -2:
        errmsg = "User does not exist, please try again later.";// "�û�������,��ˢ��ҳ�������";
        break;
    case -3:
        errmsg = "File does not exist, please try again later.";// "�ļ�������,��ˢ��ҳ�������";
        break;
    case -4:
        errmsg = "Login information is incorrect, please try to login again";// "��¼��Ϣ���������µ�¼����";
        break;
    case -5:
        errmsg = "host_key and user_key invalid";// "host_key��user_key��Ч";
        break;
    case -6:
        errmsg = "Please sign in again";// "�����µ�¼";
        break;
    case -7:
        errmsg = "The share has been deleted or canceled";// "�÷�����ɾ������ȡ��";
        break;
    case -8:
        errmsg = "The share has been deleted or canceled";//"�÷����Ѿ�����";
        break;
    case -9:
        errmsg = "Access password error";// "�����������";
        break;
    case -10:
        errmsg = "Share the chain has reached the maximum upper limit 100 000, can not share again";// "���������Ѿ��ﵽ�������100000���������ٴη���";
        break;
    case -11:
        errmsg = "Invalid authentication cookie";// "��֤cookie��Ч";
        break;
    case -14:
        errmsg = "Sorry, SMS share 20 daily limit, you have to share finished today, please come back tomorrow to share it!";// "�Բ��𣬶��ŷ���ÿ������20����������Ѿ������꣬��������������ɣ�";
        break;
    case -15:
        errmsg = "Sorry, the message share limit 20 per day, you have to share finished today, please come back tomorrow to share it!";// "�Բ����ʼ�����ÿ������20�⣬������Ѿ������꣬��������������ɣ�";
        break;
    case -16:
        errmsg = "Sorry, the document has restricted share!";// "�Բ��𣬸��ļ��Ѿ����Ʒ���";
        break;
    case -17:
        errmsg = "File sharing over the limit";// "�ļ�����������";
        break;
    case -30:
        errmsg = "File already exists";// "�ļ��Ѵ���";
        break;
    case -31:
        errmsg = "File Save Failed";// "�ļ�����ʧ��";
        break;
    case -33:
        errmsg = "Once supported operating 10,000, minus point try";// "һ��֧�ֲ���10000�����������԰�";
        break;
    case -32:
        errmsg = "Your space inadequate yo, and quickly buy space bar";// "��Ŀռ䲻����Ӵ���Ͻ�����ռ��";
        break;
    case -70:
        errmsg = "You share the file contains a virus or virus-like, to you and to others data security, another file-sharing it";// "�������ļ��а������������Ʋ�����Ϊ��������˵����ݰ�ȫ�������ļ������";
        break;
    default:
        errmsg = "Unknow error";
        break;
    }
    return errmsg;
}

/*������JS��ȡ��Ӧ�����������صĴ�����Ϣ��Ȼ��ͨ�� Google ���룬����ΪӢ�ġ�*/
const char* get_download_errmsg_by_errno(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case 36000:
        errmsg = "Network busy, please try again later";// "���緱æ�����Ժ�����";
        break;
    case 36001:
        errmsg = "Parameter error";// "��������";
        break;
    case 36002:
        errmsg = "appid error";// "appid����";
        break;
    case 36003:
        errmsg = "Please try refresh";// "��ˢ������";
        break;
    case 36004:
        errmsg = "Please sign in again";// "�����µ�¼";
        break;
    case 36005:
        errmsg = "User is not logged";// "�û�δ��¼";
        break;
    case 36006:
        errmsg = "The user does not activate";// "�û�δ����";
        break;
    case 36007:
        errmsg = "User is not authorized";// "�û�δ��Ȩ";
        break;
    case 36008:
        errmsg = "User does not exist";// "�û�������";
        break;
    case 36009:
        errmsg = "User space shortage";// "�û��ռ䲻��";
        break;
    case 36010:
        errmsg = "File does not exist";// "�ļ�������";
        break;
    case 36012:
        errmsg = "The operation timed out, please try again";// "������ʱ��������";
        break;
    case 36013:
        errmsg = "At the same task much download can not be downloaded";// "ͬʱ���ص�������࣬��������";
        break;
    case 36014:
        errmsg = "Storage path has been used";// "�洢·����ʹ��";
        break;
    case 36016:
        errmsg = "Task has been deleted";// "������ɾ��";
        break;
    case 36017:
        errmsg = "Task completed";// "���������";
        break;
    case 36018:
        errmsg = "Resolution fails, the seed file is corrupted";// "����ʧ�ܣ������ļ���";
        break;
    case 36019:
        errmsg = "The task is being processed";// "�������ڴ�����";
        break;
    case 36020:
        errmsg = "Task address does not exist";// "�����ַ������";
        break;
    case 36021:
        errmsg = "Max ordinary users download a task Oh! Immediately turn off download packages Download More!";// "��ͨ�û����ͬʱ����1������Ŷ�����Ͽ�ͨ���������ײͣ��������ظ��࣡";
        break;
    case 36022:
        errmsg = "At the same task much download can not be downloaded";// "ͬʱ���ص�������࣬��������";
        break;
    case 36023:
        errmsg = "Ordinary users can only download offline 5 monthly task Oh! Immediately turn off download packages Download More!";// "��ͨ�û�ÿ��ֻ����������5������Ŷ�����Ͽ�ͨ���������ײͣ��������ظ��࣡";
        break;
    case 36024:
        errmsg = "This month downloads exceeded limit";// "�����������ѳ�����";
        break;
    case 36025:
        errmsg = "Share link has expired";// "����������ʧЧ";
        break;
    case 36026:
        errmsg = "Link malformed";// "���Ӹ�ʽ����";
        break;
    case 36027:
        errmsg = "Link malformed";// "���Ӹ�ʽ����";
        break;
    case 36028:
        errmsg = "Temporarily unable to find the relevant seed information";// "��ʱ�޷��ҵ����������Ϣ";
        break;
    case 36031:
        errmsg = "Network busy, please try again later";// "���緱æ�����Ժ�����";
        break;
    case -19:
        errmsg = "Please enter the verification code";// "��������֤��";
        break;
    default:
        errmsg = "Unknow error";
        break;
    }
    return errmsg;
}

/*������JS��ȡ��Ӧ���ǹ����ײ͵Ĵ�����Ϣ��Ȼ��ͨ�� Google ���룬����ΪӢ�ġ�*/
const char* get_buy_errmsg_by_errno(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case 1000:
        errmsg = "Uh oh, you can not upgrade from Advanced Package to lower packages, please re-purchase it.";// "��Ŷ�����ܴӸ߼��ײ��������ͼ��ײͣ������¹���ɡ�";
        break;
    case 1001:
        errmsg = "Uh oh, you can not upgrade from Advanced Package to lower packages, please re-purchase it.";// "��Ŷ�����ܴӸ߼��ײ��������ͼ��ײͣ������¹���ɡ�";
        break;
    case 1002:
        errmsg = "Lol, create orders failed, please try again later about it.";// "��Ŷ����������ʧ���ˣ����Ժ�����һ�°ɡ�";
        break;
    case 1003:
        errmsg = "Lol, create orders failed, please try again later about it.";// "��Ŷ����������ʧ���ˣ����Ժ�����һ�°ɡ�";
        break;
    case 1004:
        errmsg = "Lol, create orders failed, please try again later about it.";// "��Ŷ����������ʧ���ˣ����Ժ�����һ�°ɡ�";
        break;
    case 1005:
        errmsg = "Lol, create orders failed, please try again later about it.";// "��Ŷ����������ʧ���ˣ����Ժ�����һ�°ɡ�";
        break;
    case 1006:
        errmsg = "Lol, can not buy the same product on the same day, please re-purchase it.";// "��Ŷ������ͬһ�칺����ͬ��Ʒ�������¹���ɡ�";
        break;
    case 1007:
        errmsg = "Lol, can not buy the same product on the same day, please re-purchase it.";// "��Ŷ������ͬһ�칺����ͬ��Ʒ�������¹���ɡ�";
        break;
    case 3002:
        errmsg = "Lol, the order has been successful payment, please re-purchase it.";// "��Ŷ���ö����Ѿ�֧���ɹ��������¹���ɡ�";
        break;
    case 3003:
        errmsg = "Lol, the order has been paid fail, please re-purchase it.";// "��Ŷ���ö����Ѿ�֧��ʧ�ܣ������¹���ɡ�";
        break;
    case 36000:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36001:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36002:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36003:
        errmsg = "The visit anomaly, an authority restricted";// "�ôη����쳣��Ȩ������";
        break;
    case 36005:
        errmsg = "Verification code input errors, please refresh retry";// "��֤�����������ˢ������";
        break;
    case 36006:
        errmsg = "Uh oh, we did not launch this product ah";// "��Ŷ�����ǻ�û�Ƴ�����Ʒѽ";
        break;
    case 36007:
        errmsg = "As an exception, a cup of tea next to retry?";// "���쳣���ȱ��������£�";
        break;
    case 36008:
        errmsg = "Oh, abnormal your operation, please refresh and try again.";// "��ѽ����Ĳ����쳣����ˢ�����ԡ�";
        break;
    case 36009:
        errmsg = "Foundation course allowed to buy";// "�����ײͲ�������";
        break;
    case 36010:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36011:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36012:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36013:
        errmsg = "The order can not be re-paid";// "�ö����޷�����֧��";
        break;
    case 36014:
        errmsg = "Lol, the order has been successful payment, please re-purchase it.";// "��Ŷ���ö����Ѿ�֧���ɹ��������¹���ɡ�";
        break;
    case 36015:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36016:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36017:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36018:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    case 36019:
        errmsg = "Lol, server cold, urgent medical treatment in ......";// "��Ŷ����������ð�ˣ�����ҽ���С���";
        break;
    default:
        errmsg = "Unknow error";
        break;
    }
    return errmsg;
}

/*������JS��ȡ��Ӧ���ǹ����ײ͵Ĵ�����Ϣ��Ȼ��ͨ�� Google ���룬����ΪӢ�ġ�*/
const char* get_record_errmsg_by_errno(int error)
{
    const char* errmsg = 0;
    switch (error) {
    case 36000:
        errmsg = "Internal error";// "�ڲ�����";
        break;
    case 36001:
        errmsg = "Unsupported API";// "��֧�ֵ�API";
        break;
    case 36002:
        errmsg = "Parameter error";// "��������";
        break;
    case 36003:
        errmsg = "No access";// "��Ȩ�޷���";
        break;
    case 36005:
        errmsg = "Code invalid or illegal";// "��֤��ʧЧ��Ƿ�";
        break;
    case 36006:
        errmsg = "To purchase the product does not exist";// "Ҫ����Ĳ�Ʒ������";
        break;
    case 36007:
        errmsg = "Users operate in parallel in the process of buying the product, but could not get the error code";// "�û��ڹ����Ʒ�Ĺ����в��в�����һ�㲻����ָô�����";
        break;
    case 36016:
        errmsg = "This function is not property values and can not get access systems concern";// "�ù��ܲ�������ֵ�����ܻ�ȡ������ϵͳ��ע";
        break;
    case 36017:
        errmsg = "This feature is not a consumer value, not consumption, access systems concern";// "�ù��ܲ�������ֵ���������ѣ�����ϵͳ��ע";
        break;
    case 36018:
        errmsg = "Function items to be consumed is not found, access systems concern";// "Ҫ���ѵĹ�����δ�ҵ�������ϵͳ��ע";
        break;
    case 36019:
        errmsg = "Refusal to consume, the user does not have quotas, access systems concern";// "�ܾ����ѣ��û�û������ˣ�����ϵͳ��ע";
        break;
    case 36020:
        errmsg = "Request replay";// "�����ط�";
        break;
    case 36021:
        errmsg = "Request expired, or a third party request forgery";// "������ڣ������ǵ�����α�������";
        break;
    case 36031:
        errmsg = "Third party api parameter error";// "������api��������";
        break;
    case 36032:
        errmsg = "Third party api signature error";// "������apiǩ������";
        break;
    case 36033:
        errmsg = "Third party api file error";// "������api�ļ�����";
        break;
    case 36034:
        errmsg = "Database Error";// "���ݿ����";
        break;
    case 36035:
        errmsg = "Orders already exist";// "�����Ѿ�����";
        break;
    case 36036:
        errmsg = "Order token failure";// "����tokenʧЧ";
        break;
    case 36037:
        errmsg = "Check Order does not exist";// "��ѯ����������";
        break;
    case 36038:
        errmsg = "Provinces parameter error";// "ʡ�в�������";
        break;
    case 36039:
        errmsg = "Price does not exist";// "���۲�����";
        break;
    default:
        errmsg = "Unknow error";
        break;
    }
    return errmsg;
}
