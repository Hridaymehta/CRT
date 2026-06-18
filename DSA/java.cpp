import java.sql.*;
import java.util.Scanner;

public class StudentDatabase {
    private static final String URL = "jdbc:mysql://localhost:3306/studentdb";
    private static final String USER = "root";
    private static final String PASSWORD = "password";

    public static void main(String[] args) {
        try (Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
             Scanner sc = new Scanner(System.in)) {

            insertStudent(con, 1, "Asha", 88);
            displayStudents(con);
            updateMarks(con, 1, 95);
            displayStudents(con);

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    static void insertStudent(Connection con, int id, String name, int marks) throws SQLException {
        String sql = "INSERT INTO students (id, name, marks) VALUES (?, ?, ?)";
        try (PreparedStatement ps = con.prepareStatement(sql)) {
            ps.setInt(1, id);
            ps.setString(2, name);
            ps.setInt(3, marks);
            ps.executeUpdate();
        }
    }

    static void displayStudents(Connection con) throws SQLException {
        String sql = "SELECT id, name, marks FROM students";
        try (Statement st = con.createStatement();
             ResultSet rs = st.executeQuery(sql)) {
            while (rs.next()) {
                System.out.println(rs.getInt("id") + " " +
                                   rs.getString("name") + " " +
                                   rs.getInt("marks"));
            }
        }
    }

    static void updateMarks(Connection con, int id, int newMarks) throws SQLException {
        String sql = "UPDATE students SET marks = ? WHERE id = ?";
        try (PreparedStatement ps = con.prepareStatement(sql)) {
            ps.setInt(1, newMarks);
            ps.setInt(2, id);
            ps.executeUpdate();
        }
    }
}