import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class SHA1Example {
    public static void main(String[] args) {
        String text = "This is the text for which we want to calculate the SHA-1 hash";

        try {
            // Create a MessageDigest instance for SHA-1
            MessageDigest sha1 = MessageDigest.getInstance("SHA-1");

            // Update the message digest with the bytes of the text
            sha1.update(text.getBytes());

            // Calculate the digest
            byte[] digest = sha1.digest();

            // Convert the byte array to a hexadecimal string
            String sha1Hash = bytesToHex(digest);

            System.out.println("Original Text: " + text);
            System.out.println("SHA-1 Hash: " + sha1Hash);
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
