// DES application

import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
import java.security.Key;

public class DESlab6 {

    public static void main(String[] args) throws Exception {
        // Secret key for DES encryption (56-bit key)
        String key = "MySecret";

        // Input data to be encrypted
        String data = "Hello, DES!";

        // Encrypt the data
        byte[] encryptedData = encrypt(data, key);

        System.out.println("Original Data: " + data);
        System.out.println("Encrypted Data: " + new String(encryptedData));

        // Decrypt the data
        String decryptedData = decrypt(encryptedData, key);

        System.out.println("Decrypted Data: " + decryptedData);
    }

    public static byte[] encrypt(String data, String key) throws Exception {
        Cipher cipher = Cipher.getInstance("DES");
        Key secretKey = new SecretKeySpec(key.getBytes(), "DES");
        cipher.init(Cipher.ENCRYPT_MODE, secretKey);

        byte[] dataBytes = data.getBytes("UTF-8");
        byte[] encryptedData = cipher.doFinal(dataBytes);

        return encryptedData;
    }

    public static String decrypt(byte[] encryptedData, String key) throws Exception {
        Cipher cipher = Cipher.getInstance("DES");
        Key secretKey = new SecretKeySpec(key.getBytes(), "DES");
        cipher.init(Cipher.DECRYPT_MODE, secretKey);

        byte[] decryptedDataBytes = cipher.doFinal(encryptedData);
        return new String(decryptedDataBytes, "UTF-8");
    }
}
