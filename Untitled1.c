<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Kaziko Khaja Ghar</title>

<style>
    body{
        font-family: Arial, sans-serif;
        margin:0;
        background:#fff8f0;
    }

    header{
        background:#d35400;
        color:white;
        text-align:center;
        padding:30px;
    }

    nav{
        background:#333;
        padding:12px;
        text-align:center;
    }

    nav a{
        color:white;
        text-decoration:none;
        margin:15px;
        font-weight:bold;
    }

    section{
        padding:20px;
    }

    h2{
        color:#d35400;
    }

    .menu-container{
        display:flex;
        flex-wrap:wrap;
        gap:20px;
        justify-content:center;
    }

    .menu-item{
        background:white;
        width:280px;
        border-radius:12px;
        overflow:hidden;
        box-shadow:0 2px 8px rgba(0,0,0,0.2);
    }

    .menu-item img{
        width:100%;
        height:180px;
        object-fit:cover;
    }

    .menu-content{
        padding:15px;
    }

    .offer{
        background:#ffe0b2;
        padding:20px;
        text-align:center;
        border-radius:10px;
    }

    button{
        background:#d35400;
        color:white;
        border:none;
        padding:10px 20px;
        border-radius:5px;
        cursor:pointer;
    }

    footer{
        background:#d35400;
        color:white;
        text-align:center;
        padding:15px;
        margin-top:20px;
    }
</style>
</head>

<body>

<header>
    <h1>??? Kaziko Khaja Ghar</h1>
    <p>???? Taste the Heart of Nepal ????</p>
</header>

<nav>
    <a href="#about">About</a>
    <a href="#menu">Menu</a>
    <a href="#offers">Offers</a>
    <a href="#contact">Contact</a>
</nav>

<section id="about">
    <h2>?? Welcome to Kaziko Khaja Ghar</h2>
    <p>
        Enjoy authentic Nepali food prepared with fresh ingredients and
        traditional recipes. From momo and chowmein to dal bhat and chiya,
        we serve delicious food at affordable prices.
    </p>
</section>

<section id="menu">
    <h2>??? Our Popular Menu</h2>

    <div class="menu-container">

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1626776876729-bab4369a5a5f?w=600" alt="Momo">
            <div class="menu-content">
                <h3>?? Momo - Rs.150</h3>
                <p>Steamed dumplings served with spicy achar.</p>
            </div>
        </div>

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1612929633738-8fe44f7ec841?w=600" alt="Chowmein">
            <div class="menu-content">
                <h3>?? Chowmein - Rs.120</h3>
                <p>Stir-fried noodles with vegetables and spices.</p>
            </div>
        </div>

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1601050690597-df0568f70950?w=600" alt="Samosa">
            <div class="menu-content">
                <h3>?? Samosa - Rs.40</h3>
                <p>Crispy pastry filled with spiced potatoes.</p>
            </div>
        </div>

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1585937421612-70a008356fbe?w=600" alt="Dal Bhat">
            <div class="menu-content">
                <h3>?? Dal Bhat - Rs.250</h3>
                <p>Traditional Nepali meal with rice, lentils and curry.</p>
            </div>
        </div>

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1551024601-bec78aea704b?w=600" alt="Tea">
            <div class="menu-content">
                <h3>?? Chiya - Rs.30</h3>
                <p>Hot Nepali milk tea with aromatic spices.</p>
            </div>
        </div>

        <div class="menu-item">
            <img src="https://images.unsplash.com/photo-1579954115545-a95591f28bfc?w=600" alt="Lassi">
            <div class="menu-content">
                <h3>?? Lassi - Rs.80</h3>
                <p>Refreshing yogurt-based drink.</p>
            </div>
        </div>

    </div>
</section>

<section id="offers">
    <h2>?? Special Offer</h2>
    <div class="offer">
        <h3>Buy 2 Plates of Momo & Get 1 Chiya FREE!</h3>
        <button onclick="alert('Thank you for visiting Kaziko Khaja Ghar!')">
            Claim Offer
        </button>
    </div>
</section>

<section id="contact">
    <h2>?? Contact Us</h2>
    <p><strong>Location:</strong> Kaziko Khaja Ghar, Kathmandu, Nepal</p>
    <p><strong>Phone:</strong> +977-98XXXXXXXX</p>
    <p><strong>Open:</strong> 8:00 AM – 9:00 PM Daily</p>
</section>

<footer>
    <p>??? Kaziko Khaja Ghar – Taste the Heart of Nepal!</p>
    <p>&copy; 2026 Kaziko Khaja Ghar. All Rights Reserved.</p>
</footer>

</body>
</html>






