import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class MD5Example {
    public static void main(String[] args) {
        String text = "This is the text for which we want to calculate the MD5 hash";

        try {
            // Create a MessageDigest instance for MD5
            MessageDigest md5 = MessageDigest.getInstance("MD5");

            // Update the message digest with the bytes of the text
            md5.update(text.getBytes());

            // Calculate the digest
            byte[] digest = md5.digest();

            // Convert the byte array to a hexadecimal string
            String md5Hash = bytesToHex(digest);

            System.out.println("Original Text: " + text);
            System.out.println("MD5 Hash: " + md5Hash);
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        }
    }

    public static String bytesToHex(byte[] bytes) {
        StringBuilder hexString = new StringBuilder();
        for (byte b : bytes) {
            String hex = Integer.toHexString(0xFF & b);
            if (hex.length() == 1) {
                hexString.append('0');
            }
            hexString.append(hex);
        }
        return hexString.toString();
    }
}
