package org.week2;

public class CartItem {

	public CartItem() {
		// TODO - implement CartItem.CartItem
		throw new UnsupportedOperationException();
	}

	public int getItemId() {
		return this.itemId;
	}

	/**
	 * 
	 * @param itemId
	 */
	public void setItemId(int itemId) {
		this.itemId = itemId;
	}

	public double getPrice() {
		return this.price;
	}

	/**
	 * 
	 * @param price
	 */
	public void setPrice(double price) {
		this.price = price;
	}

	public int getQuantity() {
		return this.quantity;
	}

	/**
	 * 
	 * @param quantity
	 */
	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}

	public int getTaxBand() {
		return this.taxBand;
	}

	/**
	 * 
	 * @param taxBand
	 */
	public void setTaxBand(int taxBand) {
		this.taxBand = taxBand;
	}

	private int itemId;
	private double price;
	private int quantity;
	private int taxBand;

}
